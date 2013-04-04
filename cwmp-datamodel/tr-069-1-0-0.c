#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tr-069-1-0-0.h>

#define BUF_SUZE	256

char *root = "InternetGatewayDevice";

/*
 * -------------------------------------------------------------------
 * Parameter name function start at here.
 * -------------------------------------------------------------------
 */
uint32
LANDeviceNumberOfEntries(struct object_datamodel *a)
{
	/* char *str = "InternetGatewayDevice.LANDeviceNumberOfEntries"; */
	char buf[BUF_SUZE];

	sprintf(buf, "%s.%s", root, a->param_name);

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, buf, strlen(buf));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
WANDeviceNumberOfEntries(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s", root, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_Manufacturer(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_ManufacturerOUI(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_ModelName(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_Description(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_ProductClass(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_SerialNumber(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_HardwareVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_SoftwareVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_ModemFirmwareVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_EnabledOptions(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_AdditionalHardwareVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_AdditionalSoftwareVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_SpecVersion(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_ProvisioningCode(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_UpTime(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_FirstUseDate(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_DeviceLog(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceInfo_VendorConfigFileNumberOfEntries(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
VendorConfigFile_Name(struct object_datamodel *a)
{
	char *str = "VendorConfigFile";
	char buf[BUF_SUZE];

	sprintf(buf, "%s.%s.%d.%s", root, str, a->index[0], a->param_name);

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, buf, strlen(buf));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
VendorConfigFile_Version(struct object_datamodel *a)
{
	char *str = "VendorConfigFile";
	char buf[BUF_SUZE];

	sprintf(buf, "%s.%s.%d.%s", root, str, a->index[0], a->param_name);

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, buf, strlen(buf));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
VendorConfigFile_Date(struct object_datamodel *a)
{
	char *str = "VendorConfigFile";
	char buf[BUF_SUZE];

	sprintf(buf, "%s.%s.%d.%s", root, str, a->index[0], a->param_name);

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, buf, strlen(buf));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
VendorConfigFile_Description(struct object_datamodel *a)
{
	char *str = "VendorConfigFile";
	char buf[BUF_SUZE];

	sprintf(buf, "%s.%s.%d.%s", root, str, a->index[0], a->param_name);

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, buf, strlen(buf));
		break;
	case ACTION_SET_PARAM_ATTR:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_ATTR:
		/* FIXME */
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceConfig_PersistentData(struct object_datamodel *a)
{
	char *str = "InternetGatewayDevice.DeviceConfig.PersistentData";

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		/*datamodel_get_var_typed_value(a, 1, str, 11);*/
		break;
	case ACTION_GET_PARAM_NAMES:
		datamodel_get_var_typed_value(a, ASN_STRING, str, strlen(str));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
DeviceConfig_ConfigFile(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_URL(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_Username(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_Password(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_VAL:
		/* FIXME */
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_PeriodicInformEnable(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_PeriodicInformInterval(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_PeriodicInformTime(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_ParameterKey(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_ConnectionRequestURL(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_ConnectionRequestUsername(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_ConnectionRequestPassword(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_UpgradesManaged(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_KickURL(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
ManagementServer_DownloadProgressURL(struct object_datamodel *a)
{
	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s%s", root, a->obj_name, a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
Time_NTPServer1(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_NTPServer2(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_NTPServer3(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_NTPServer4(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_NTPServer5(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_CurrentLocalTime(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_LocalTimeZone(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_LocalTimeZoneName(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_DaylightSavingsUsed(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_DaylightSavingsStart(struct object_datamodel *a)
{

	return 0;
}

uint32
Time_DaylightSavingsEnd(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_PasswordRequired(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_PasswordUserSelectable(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_UpgradeAvailable(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_WarrantyDate(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPName(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPHelpDesk(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPHomePage(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPHelpPage(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPLogo(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPLogoSize(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPMailServer(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ISPNewsServer(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_TextColor(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_BackgroundColor(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ButtonColor(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ButtonTextColor(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_AutoUpdateServer(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ExampleLogin(struct object_datamodel *a)
{

	return 0;
}

uint32
UserInterface_ExamplePassword(struct object_datamodel *a)
{

	return 0;
}

uint32
Layer3Forwarding_DefaultConnectionService(struct object_datamodel *a)
{

	return 0;
}

uint32
Layer3Forwarding_ForwardNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_Enable(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_Status(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_Type(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_DestIPAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_DestSubnetMask(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_SourceIPAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_SourceSubnetMask(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_GatewayIPAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_Interface(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_ForwardingMetric(struct object_datamodel *a)
{

	return 0;
}

uint32
Forwarding_i_MTU(struct object_datamodel *a)
{

	return 0;
}

uint32
LANConfigSecurity_ConfigPassword(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_DiagnosticsState(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_Interface(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_Host(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_NumberOfRepetitions(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_Timeout(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_DataBlockSize(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_DSCP(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_SuccessCount(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_FailureCount(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_AverageResponseTime(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_MinimumResponseTmie(struct object_datamodel *a)
{

	return 0;
}

uint32
IPPingDiagnostics_MaximumResponseTime(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_LANEthernetInterfaceNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_LANUSBInterfaceNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_LANWLANConfigurationNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DHCPServerConfigurable(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DHCPServerEnable(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DHCPRelay(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_MinAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_MaxAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_ReservedAddresses(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_SubnetMask(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DNSServers(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DomainName(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_IPRouters(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_DHCPLeaseTime(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_UseAllocatedWAN(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_AssociatedConnection(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_PassthroughLease(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_PassthroughMACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_AllowedMACAddresses(struct object_datamodel *a)
{

	return 0;
}

uint32
LANHostConfigManagement_IPInterfaceNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
IPInterface_i_Enable(struct object_datamodel *a)
{
	/*
	 * InternetGatewayDevice.LANDevice.{i}.LANHostConfigManagement.IPInterface.{i}.Enable
	 */
	char *str0 = "LANDevice";
	char *str1 = "LANHostConfigManagement.IPInterface";

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s.%d.%s.%d.%s", root, str0, a->index[0], str1, a->index[1], a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
IPInterface_i_IPInterfaceIPAddress(struct object_datamodel *a)
{
	char *str0 = "LANDevice";
	char *str1 = "LANHostConfigManagement.IPInterface";

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s.%d.%s.%d.%s", root, str0, a->index[0], str1, a->index[1], a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}
	return 0;
}

uint32
IPInterface_i_IPInterfaceSubnetMask(struct object_datamodel *a)
{
	char *str0 = "LANDevice";
	char *str1 = "LANHostConfigManagement.IPInterface";

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s.%d.%s.%d.%s", root, str0, a->index[0], str1, a->index[1], a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}
	return 0;
}

uint32
IPInterface_i_IPInterfaceAddressingType(struct object_datamodel *a)
{
	char *str0 = "LANDevice";
	char *str1 = "LANHostConfigManagement.IPInterface";

	switch (a->action) {
	case ACTION_SET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_VAL:
		break;
	case ACTION_GET_PARAM_NAMES:
		sprintf(a->full_path, "%s.%s.%d.%s.%d.%s", root, str0, a->index[0], str1, a->index[1], a->param_name);
		datamodel_get_var_typed_value(a, ASN_STRING, a->full_path, strlen(a->full_path));
		break;
	case ACTION_SET_PARAM_ATTR:
		break;
	case ACTION_GET_PARAM_ATTR:
		break;
	case ACTION_ADDOBJ:
		break;
	case ACTION_DELOBJ:
		break;
	default:
		break;
	}

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Enable(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Status(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_MACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_MACAddressControlEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_MaxBitRate(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_DuplexMode(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Stats_BytesSent(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Stats_BytesReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Stats_PacketsSent(struct object_datamodel *a)
{

	return 0;
}

uint32
LANEthernetInterfaceConfig_i_Stats_PacketsReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Enable(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Status(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_MACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_MACAddressControlEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Standard(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Type(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Rate(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Power(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Stats_BytesSent(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Stats_BytesReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Stats_CellsSent(struct object_datamodel *a)
{

	return 0;
}

uint32
LANUSBInterfaceConfig_i_Stats_CellsReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_Enable(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_Status(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BSSID(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_MaxBitRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_Channel(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_SSID(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BeaconType(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_MACAddressControlEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_Standard(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_WEPKeyIndex(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_KeyPassphrase(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_WEPEncryptionLevel(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BasicEncryptionModes(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BasicAuthenticationMode(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_WPAEncryptionModes(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_WPAAuthenticationMode(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_IEEE11iEncryptionModes(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_IEEE11iAuthenticationMode(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_PossibleChannels(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BasicDataTransmitRates(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_OperationalDataTransmitRates(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_PossibleDataTransmitRates(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_InsecureOOBAccessEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_BeaconAdvertisementEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_RadioEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_AutoRateFallBackEnabled(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_LocationDescription(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_RegulatoryDomain(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalPSKFailures(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalIntegrityFailures(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_ChannelsInUse(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_DeviceOperationMode(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_DistanceFromRoot(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_PeerBSSID(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_AuthenticationServiceMode(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalBytesSent(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalBytesReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalPacketsSent(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalPacketsReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
WLANConfiguration_i_TotalAssociations(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_TotalAssociations(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_AssociatedDeviceMACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_AssociatedDeviceIPAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_AssociatedDeviceAuthenticationState(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_LastRequestedUnicastCipher(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_LastRequestedMulticastCipher(struct object_datamodel *a)
{

	return 0;
}

uint32
AssociatedDevice_i_LastPMKId(struct object_datamodel *a)
{

	return 0;
}

uint32
WEPKey_i_WEPKey(struct object_datamodel *a)
{

	return 0;
}

uint32
PreSharedKey_i_PreSharedKey(struct object_datamodel *a)
{

	return 0;
}

uint32
PreSharedKey_i_KeyPassphrase(struct object_datamodel *a)
{

	return 0;
}

uint32
PreSharedKey_i_AssociatedDeviceMACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_HostNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_IPAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_AddressSource(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_LeaseTimeRemaining(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_MACAddress(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_HostName(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_InterfaceType(struct object_datamodel *a)
{

	return 0;
}

uint32
LANDevice_i_Hosts_Host_i_Active(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDevice_i_WANConnectionNumberOfEntries(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_EnabledForInternet(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_WANAccessType(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_Layer1UpstreamMaxBitRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_Layer1DownstreamMaxBitRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_PhysicalLinkStatus(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_WANAccessProvider(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_TotalBytesSent(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_TotalBytesReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_TotalPacketsSent(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_TotalPacketsReceived(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_MaximumActiveConnections(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_NumberOfActiveConnections(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_Connection_i_ActiveConnectionDeviceContainer(struct object_datamodel *a)
{

	return 0;
}

uint32
WANCommonInterfaceConfig_Connection_i_ActiveConnectionServiceID(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Enable(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Status(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ModulationType(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_LineEncoding(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DataPath(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_InterleaveDepth(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_LineNumber(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_UpstreamCurrRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DownstreamCurrRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_UpstreamMaxRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DownstreamMaxRate(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_UpstreamNoiseMargin(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DownstreamNoiseMargin(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_UpstreamAttenuation(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DownstreamAttenuation(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_UpstreamPower(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_DownstreamPower(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATURVendor(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATURCountry(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATURANSIStd(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATURANSIRev(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATUCVendor(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATUCCountry(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATUCANSIStd(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ATUCANSIRev(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_TotalStart(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_ShowtimeStart(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_LastShowtimeStart(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_CurrentDayStart(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_QuarterHourStart(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_ReceiveBlocks(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_TransmitBlocks(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_CellDelin(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_LinkRetrain(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_InitErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_InitTimeouts(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_LossOfFraming(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_ErroredSecs(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_SeverelyErroredSecs(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_FECErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_ATUCFECErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_HECErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_ATUCHECErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_CRCErrors(struct object_datamodel *a)
{

	return 0;
}

uint32
WANDSLInterfaceConfig_Stats_Total_ATUCCRCErrors(struct object_datamodel *a)
{

	return 0;
}

/*
 * -------------------------------------------------------------------
 * Object function start at here.
 * -------------------------------------------------------------------
 */
uint32
_InternetGatewayDevice(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);

	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "LANDeviceNumberOfEntries", sizeof("LANDeviceNumberOfEntries"))) {
			/* Do something at here ..*/
			LANDeviceNumberOfEntries(a);
		} else if (!strncmp(a->param_name, "WANDeviceNumberOfEntries", sizeof("WANDeviceNumberOfEntries"))) {
			/* Do something at here ..*/
			WANDeviceNumberOfEntries(a);
		}
	} else {
		a->param_name[0] = '\0';

		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			strncpy(a->param_name, "LANDeviceNumberOfEntries", strlen("LANDeviceNumberOfEntries"));
			LANDeviceNumberOfEntries(a);
			strncpy(a->param_name, "WANDeviceNumberOfEntries", strlen("WANDeviceNumberOfEntries"));
			WANDeviceNumberOfEntries(a);
			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}

	return 0;
}

uint32
_DeviceInfo(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);

	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "Manufacturer", sizeof("Manufacturer"))) {
			DeviceInfo_Manufacturer(a);
		} else if (!strncmp(a->param_name, "ManufacturerOUI", sizeof("ManufacturerOUI"))) {
			DeviceInfo_ManufacturerOUI(a);
		} else if (!strncmp(a->param_name, "ModelName", sizeof("ModelName"))) {
			DeviceInfo_ModelName(a);
		} else if (!strncmp(a->param_name, "Description", sizeof("Description"))) {
			DeviceInfo_Description(a);
		} else if (!strncmp(a->param_name, "ProductClass", sizeof("ProductClass"))) {
			DeviceInfo_ProductClass(a);
		} else if (!strncmp(a->param_name, "SerialNumber", sizeof("SerialNumber"))) {
			DeviceInfo_SerialNumber(a);
		} else if (!strncmp(a->param_name, "HardwareVersion", sizeof("HardwareVersion"))) {
			DeviceInfo_HardwareVersion(a);
		} else if (!strncmp(a->param_name, "SoftwareVersion", sizeof("SoftwareVersion"))) {
			DeviceInfo_SoftwareVersion(a);
		} else if (!strncmp(a->param_name, "ModemFirmwareVersion", sizeof("ModemFirmwareVersion"))) {
			DeviceInfo_ModemFirmwareVersion(a);
		} else if (!strncmp(a->param_name, "EnabledOptions", sizeof("EnabledOptions"))) {
			DeviceInfo_EnabledOptions(a);
		} else if (!strncmp(a->param_name, "AdditionalHardwareVersion", sizeof("AdditionalHardwareVersion"))) {
			DeviceInfo_AdditionalHardwareVersion(a);
		} else if (!strncmp(a->param_name, "AdditionalSoftwareVersion", sizeof("AdditionalSoftwareVersion"))) {
			DeviceInfo_AdditionalSoftwareVersion(a);
		} else if (!strncmp(a->param_name, "SpecVersion", sizeof("SpecVersion"))) {
			DeviceInfo_SpecVersion(a);
		} else if (!strncmp(a->param_name, "ProvisioningCode", sizeof("ProvisioningCode"))) {
			DeviceInfo_ProvisioningCode(a);
		} else if (!strncmp(a->param_name, "UpTime", sizeof("UpTime"))) {
			DeviceInfo_UpTime(a);
		} else if (!strncmp(a->param_name, "FirstUseDate", sizeof("FirstUseDate"))) {
			DeviceInfo_FirstUseDate(a);
		} else if (!strncmp(a->param_name, "DeviceLog", sizeof("DeviceLog"))) {
			DeviceInfo_DeviceLog(a);
		} else if (!strncmp(a->param_name, "VendorConfigFileNumberOfEntries", sizeof("VendorConfigFileNumberOfEntries"))) {
			DeviceInfo_VendorConfigFileNumberOfEntries(a);
		}
	} else {
		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			strncpy(a->param_name, "Manufacturer", sizeof("Manufacturer"));
			DeviceInfo_Manufacturer(a);
			strncpy(a->param_name, "ManufacturerOUI", sizeof("ManufacturerOUI"));
			DeviceInfo_ManufacturerOUI(a);
			strncpy(a->param_name, "ModelName", sizeof("ModelName"));
			DeviceInfo_ModelName(a);
			strncpy(a->param_name, "Description", sizeof("Description"));
			DeviceInfo_Description(a);
			strncpy(a->param_name, "ProductClass", sizeof("ProductClass"));
			DeviceInfo_ProductClass(a);
			strncpy(a->param_name, "SerialNumber", sizeof("SerialNumber"));
			DeviceInfo_SerialNumber(a);
			strncpy(a->param_name, "HardwareVersion", sizeof("HardwareVersion"));
			DeviceInfo_HardwareVersion(a);
			strncpy(a->param_name, "SoftwareVersion", sizeof("SoftwareVersion"));
			DeviceInfo_SoftwareVersion(a);
			strncpy(a->param_name, "ModemFirmwareVersion", sizeof("ModemFirmwareVersion"));
			DeviceInfo_ModemFirmwareVersion(a);
			strncpy(a->param_name, "EnabledOptions", sizeof("EnabledOptions"));
			DeviceInfo_EnabledOptions(a);
			strncpy(a->param_name, "AdditionalHardwareVersion", sizeof("AdditionalHardwareVersion"));
			DeviceInfo_AdditionalHardwareVersion(a);
			strncpy(a->param_name, "AdditionalSoftwareVersion", sizeof("AdditionalSoftwareVersion"));
			DeviceInfo_AdditionalSoftwareVersion(a);
			strncpy(a->param_name, "SpecVersion", sizeof("SpecVersion"));
			DeviceInfo_SpecVersion(a);
			strncpy(a->param_name, "ProvisioningCode", sizeof("ProvisioningCode"));
			DeviceInfo_ProvisioningCode(a);
			strncpy(a->param_name, "UpTime", sizeof("UpTime"));
			DeviceInfo_UpTime(a);
			strncpy(a->param_name, "FirstUseDate", sizeof("FirstUseDate"));
			DeviceInfo_FirstUseDate(a);
			strncpy(a->param_name, "DeviceLog", sizeof("DeviceLog"));
			DeviceInfo_DeviceLog(a);
			strncpy(a->param_name, "VendorConfigFileNumberOfEntries", sizeof("VendorConfigFileNumberOfEntries"));
			DeviceInfo_VendorConfigFileNumberOfEntries(a);

			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}
	return 0;
}


uint32
_DeviceInfo_VendorConfigFile_i(struct object_datamodel *a)
{
	int i = 0;
	int num = 3;

	printf("name = %s\n", a->obj_name);

	/* Checking parameter name null? */
	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "Name", sizeof("Name"))) {
			VendorConfigFile_Name(a);
		} else if (!strncmp(a->param_name, "Version", sizeof("Version"))) {
			VendorConfigFile_Version(a);
		} else if (!strncmp(a->param_name, "Date", sizeof("Date"))) {
			VendorConfigFile_Date(a);
		} else if (!strncmp(a->param_name, "Description", sizeof("Description"))) {
			VendorConfigFile_Description(a);
		}
	} else {
		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			/* Get index number */
			a->index_num = 1;
			for (i = 1 ; i <= num ; i++) {
				a->index[0] = i;
				strncpy(a->param_name, "Name", sizeof("Name"));
				VendorConfigFile_Name(a);
				strncpy(a->param_name, "Version", sizeof("Version"));
				VendorConfigFile_Version(a);
				strncpy(a->param_name, "Date", sizeof("Date"));
				VendorConfigFile_Date(a);
				strncpy(a->param_name, "Description", sizeof("Description"));
				VendorConfigFile_Description(a);
			}
			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}

	return 0;
}

uint32
_DeviceConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);

	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "PersistentData", sizeof("PersistentData"))) {
			/* FIXME*/
			DeviceConfig_PersistentData(a);
		} else if (!strncmp(a->param_name, "ConfigFile", sizeof("ConfigFile"))) {
			/* FIXME */
			DeviceConfig_ConfigFile(a);
		}
	} else {
		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			strncpy(a->param_name, "PersistentData", sizeof("PersistentData"));
			DeviceConfig_PersistentData(a);
			strncpy(a->param_name, "ConfigFile", sizeof("ConfigFile"));
			DeviceConfig_ConfigFile(a);
			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}

	return 0;
}

uint32
_ManagementServer(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);

	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "URL", sizeof("URL"))) {
			ManagementServer_URL(a);
		} else if (!strncmp(a->param_name, "Username", sizeof("Username"))) {
			ManagementServer_Username(a);
		} else if (!strncmp(a->param_name, "Password", sizeof("Password"))) {
			ManagementServer_Password(a);
		} else if (!strncmp(a->param_name, "PeriodicInformEnable", sizeof("PeriodicInformEnable"))) {
			ManagementServer_PeriodicInformEnable(a);
		} else if (!strncmp(a->param_name, "PeriodicInformInterval", sizeof("PeriodicInformInterval"))) {
			ManagementServer_PeriodicInformInterval(a);
		} else if (!strncmp(a->param_name, "PeriodicInformTime", sizeof("PeriodicInformTime"))) {
			ManagementServer_PeriodicInformTime(a);
		} else if (!strncmp(a->param_name, "ParameterKey", sizeof("ParameterKey"))) {
			ManagementServer_ParameterKey(a);
		} else if (!strncmp(a->param_name, "ConnectionRequestURL", sizeof("ConnectionRequestURL"))) {
			ManagementServer_ConnectionRequestURL(a);
		} else if (!strncmp(a->param_name, "ConnectionRequestUsername", sizeof("ConnectionRequestUsername"))) {
			ManagementServer_ConnectionRequestUsername(a);
		} else if (!strncmp(a->param_name, "ConnectionRequestPassword", sizeof("ConnectionRequestPassword"))) {
			ManagementServer_ConnectionRequestPassword(a);
		} else if (!strncmp(a->param_name, "UpgradesManaged", sizeof("UpgradesManaged"))) {
			ManagementServer_UpgradesManaged(a);
		} else if (!strncmp(a->param_name, "KickURL", sizeof("KickURL"))) {
			ManagementServer_KickURL(a);
		} else if (!strncmp(a->param_name, "DownloadProgressURL", sizeof("DownloadProgressURL"))) {
			ManagementServer_DownloadProgressURL(a);
		}
	} else {
		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			strncpy(a->param_name, "URL\0", sizeof("URL\0"));
			ManagementServer_URL(a);
			strncpy(a->param_name, "Username\0", sizeof("Username\0"));
			ManagementServer_Username(a);
			strncpy(a->param_name, "Password\0", sizeof("Password\0"));
			ManagementServer_Password(a);
			strncpy(a->param_name, "PeriodicInformEnable\0", sizeof("PeriodicInformEnable\0"));
			ManagementServer_PeriodicInformEnable(a);
			strncpy(a->param_name, "PeriodicInformInterval", sizeof("PeriodicInformInterval"));
			ManagementServer_PeriodicInformInterval(a);
			strncpy(a->param_name, "PeriodicInformTime", sizeof("PeriodicInformTime"));
			ManagementServer_PeriodicInformTime(a);
			strncpy(a->param_name, "ParameterKey", sizeof("ParameterKey"));
			ManagementServer_ParameterKey(a);
			strncpy(a->param_name, "ConnectionRequestURL", sizeof("ConnectionRequestURL"));
			ManagementServer_ConnectionRequestURL(a);
			strncpy(a->param_name, "ConnectionRequestUsername", sizeof("ConnectionRequestUsername"));
			ManagementServer_ConnectionRequestUsername(a);
			strncpy(a->param_name, "ConnectionRequestPassword", sizeof("ConnectionRequestPassword"));
			ManagementServer_ConnectionRequestPassword(a);
			strncpy(a->param_name, "UpgradesManaged", sizeof("UpgradesManaged"));
			ManagementServer_UpgradesManaged(a);
			strncpy(a->param_name, "KickURL", sizeof("KickURL"));
			ManagementServer_KickURL(a);
			strncpy(a->param_name, "DownloadProgressURL", sizeof("DownloadProgressURL"));
			ManagementServer_DownloadProgressURL(a);

			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}

	return 0;
}

uint32
_Time(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_UserInterface(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_Layer3Forwarding(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_Layer3Forwarding_Forwarding_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANConfigSecurity(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_IPPingDiagnostics(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_LANHostConfigManagement(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_LANHostConfigManagement_IPInterface_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	printf(" %d, %d \n",a->index[0] ,a->index[1]);

	if (a->param_name[0] != '\0') {
		if (!strncmp(a->param_name, "Enable", sizeof("Enable"))) {
			IPInterface_i_Enable(a);
		} else if (!strncmp(a->param_name, "IPInterfaceIPAddress", sizeof("IPInterfaceIPAddress"))) {
			IPInterface_i_IPInterfaceIPAddress(a);
		} else if (!strncmp(a->param_name, "IPInterfaceSubnetMask", sizeof("IPInterfaceSubnetMask"))) {
			IPInterface_i_IPInterfaceSubnetMask(a);
		} else if (!strncmp(a->param_name, "IPInterfaceAddressingType", sizeof("IPInterfaceAddressingType"))) {
			IPInterface_i_IPInterfaceAddressingType(a);
		}
	} else {
		switch (a->action) {
		case ACTION_SET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_VAL:
			break;
		case ACTION_GET_PARAM_NAMES:
			/* Get index number form data base at here */
			a->index_num = 2;

					strncpy(a->param_name, "Enable", sizeof("Enable"));
					IPInterface_i_Enable(a);
					strncpy(a->param_name, "IPInterfaceIPAddress", sizeof("IPInterfaceIPAddress"));
					IPInterface_i_IPInterfaceIPAddress(a);
					strncpy(a->param_name, "IPInterfaceSubnetMask", sizeof("IPInterfaceSubnetMask"));
					IPInterface_i_IPInterfaceSubnetMask(a);
					strncpy(a->param_name, "IPInterfaceAddressingType", sizeof("IPInterfaceAddressingType"));
					IPInterface_i_IPInterfaceAddressingType(a);

			break;
		case ACTION_SET_PARAM_ATTR:
			break;
		case ACTION_GET_PARAM_ATTR:
			break;
		case ACTION_ADDOBJ:
			break;
		case ACTION_DELOBJ:
			break;
		default:
			break;
		}
	}

	return 0;
}

uint32
_LANDevice_i_LANEthernetInterfaceConfig_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_LANEthernetInterfaceConfig_i_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_LANUSBInterfaceConfig_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_LANUSBInterfaceConfig_i_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_WLANConfiguration_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_WLANConfiguration_i_AssociatedDevice_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_WLANConfiguration_i_WEPKey_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_WLANConfiguration_i_PreSharedKey_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_Hosts(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_LANDevice_i_Hosts_Host_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANCommonInterfaceConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANCommonInterfaceConfig_Connection_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats_Total(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats_Showtime(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats_LastShowtime(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats_CurrentDay(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLInterfaceConfig_Stats_QuarterHour(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANEthernetInterfaceConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANEthernetInterfaceConfig_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLConnectionManagement(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLConnectionManagement_ConnectionService_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANDSLDiagnostics(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANDSLLinkConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANATMF5LoopbackDiagnostics(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANEthernetLinkConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANPOTSLinkConfig(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANIPConnection_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANIPConnection_i_PortMapping_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANIPConnection_i_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i_PortMapping_i(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}

uint32
_WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i_Stats(struct object_datamodel *a)
{
	printf("name = %s\n", a->obj_name);
	return 0;
}
