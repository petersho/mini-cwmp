#include "cwmp.nsmap"
#include "soapH.h"

const char server[] = "http://127.0.0.1:3333";

int Send_Inform_Request(struct soap *soap,
			struct _cwmp__Inform *Inform,
			struct cwmp__DeviceIdStruct *DeviceIdStruct,
			struct EventList *EventList,
			struct ParameterValueList *ParameterValueList)
{
	struct _cwmp__ID id;

	id.__item = "005646";
	id.SOAP_ENV__mustUnderstand = "1";

	soap_init1(soap, SOAP_IO_KEEPALIVE);

	Inform->DeviceId = DeviceIdStruct;
	Inform->RetryCount = 0;
	Inform->MaxEnvelopes = 1;

	if (soap_begin_count(soap))
		return soap->error;

	if (soap->mode & SOAP_IO_LENGTH) {
		if (soap_envelope_begin_out(soap)
			|| soap_putheader(soap)
			|| soap_put__cwmp__ID(soap, &id, "cwmp:ID", "")
             		|| soap_body_begin_out(soap)
			|| soap_put__cwmp__Inform (soap, Inform, "cwmp:Inform", "")
			|| soap_body_end_out(soap)
			|| soap_envelope_end_out(soap))
				return soap->error;
	}

	if (soap_end_count(soap))
		return soap->error;

	if (soap_connect(soap, server, "")
		|| soap_envelope_begin_out(soap)
		|| soap_putheader(soap)
		|| soap_put__cwmp__ID(soap, &id, "cwmp:ID", "")
		|| soap_body_begin_out(soap)
		|| soap_put__cwmp__Inform (soap, Inform, "cwmp:Inform", "")
		|| soap_body_end_out(soap)
		|| soap_envelope_end_out(soap)
		|| soap_end_send(soap))
			return soap->error;

        return 0;
}

int Process_Inform(struct soap *soap)
{
	struct _cwmp__Inform Inform;
	struct cwmp__DeviceIdStruct DeviceIdStruct;

	DeviceIdStruct.Manufacturer = "Intel";
	DeviceIdStruct.OUI = "00051212";
	DeviceIdStruct.ProductClass = "ClassA";
	DeviceIdStruct.SerialNumber = "123456";

	Inform.MaxEnvelopes = 1;
	Send_Inform_Request(soap, &Inform, &DeviceIdStruct, NULL, NULL);

	return 0;
}


int main()
{
	struct soap soap;

	Process_Inform(&soap);

	return 0;
}
