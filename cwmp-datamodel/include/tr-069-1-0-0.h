#ifndef _TR_069_1_0_0_H_
#define _TR_069_1_0_0_H_

typedef unsigned int	uint32;
typedef unsigned char	uchar8;

#define ACTION_SET_PARAM_VAL		1	/* Set parameter value */
#define ACTION_GET_PARAM_VAL		2	/* Get parameter value */
#define ACTION_GET_PARAM_NAMES		3	/* Set parameter value */
#define ACTION_SET_PARAM_ATTR		4	/* Set parameter attributes */
#define ACTION_GET_PARAM_ATTR		5	/* Get parameter attributes */
#define ACTION_ADDOBJ			6	/* Add Object */
#define ACTION_DELOBJ			7	/* Delete object */

/* Type definition */
#define ASN_BOOLEAN		((uchar8)0x1)
#define ASN_UNSIGNED_INT	((uchar8)0x2)
#define ASN_INTEGER		((uchar8)0x3)
#define ASN_STRING		((uchar8)0x4)

/* Output mode definition */
#define MODE_PIPE		0
#define MODE_UDPSOCKET		1

typedef struct variable_list {
   /** NULL for last variable */
   struct variable_list *next_variable;
   /** Object identifier of variable */
   char		*name;
   /** number of subid's in name */
   uint32	name_length;
   /** ASN type of variable */
   uchar8	type;	/* Reference type definition */
   /** value of variable */
    int		val;
   /** the length of the value to be copied into buf */
   uint32	val_len;
   /** 90 percentile < 40. */
   char		buf[128];
   /** (Opaque) hook for additional data */
   void		*data;
   int		index;
} datamodel_variable_list;

struct object_datamodel {
	char *obj_name;		/* Object node name */
	char param_name[128];	/* ParameterName */
	char full_path[256];	/* Full path */
	int index_num;		/* Number of index */
	int index[32];		/* Index value */
	int action;		/* RPC Action */
	int output_mode;	/* output to pipe(0) or socket(1) */
	uint32 (*Func)(struct object_datamodel *);	/* (*function_pointer)()(struct object_datamodel *) */
	datamodel_variable_list *var_list;
	struct object_datamodel *next;
};

uint32 _InternetGatewayDevice(struct object_datamodel *a);
uint32 _DeviceInfo(struct object_datamodel *a);
uint32 _DeviceInfo_VendorConfigFile_i(struct object_datamodel *a);
uint32 _DeviceConfig(struct object_datamodel *a);
uint32 _ManagementServer(struct object_datamodel *a);
uint32 _Time(struct object_datamodel *a);
uint32 _UserInterface(struct object_datamodel *a);
uint32 _Layer3Forwarding(struct object_datamodel *a);
uint32 _Layer3Forwarding_Forwarding_i(struct object_datamodel *a);
uint32 _LANConfigSecurity(struct object_datamodel *a);
uint32 _IPPingDiagnostics(struct object_datamodel *a);
uint32 _LANDevice_i(struct object_datamodel *a);
uint32 _LANDevice_i_LANHostConfigManagement(struct object_datamodel *a);
uint32 _LANDevice_i_LANHostConfigManagement_IPInterface_i(struct object_datamodel *a);
uint32 _LANDevice_i_LANEthernetInterfaceConfig_i(struct object_datamodel *a);
uint32 _LANDevice_i_LANEthernetInterfaceConfig_i_Stats(struct object_datamodel *a);
uint32 _LANDevice_i_LANUSBInterfaceConfig_i(struct object_datamodel *a);
uint32 _LANDevice_i_LANUSBInterfaceConfig_i_Stats(struct object_datamodel *a);
uint32 _LANDevice_i_WLANConfiguration_i(struct object_datamodel *a);
uint32 _LANDevice_i_WLANConfiguration_i_AssociatedDevice_i(struct object_datamodel *a);
uint32 _LANDevice_i_WLANConfiguration_i_WEPKey_i(struct object_datamodel *a);
uint32 _LANDevice_i_WLANConfiguration_i_PreSharedKey_i(struct object_datamodel *a);
uint32 _LANDevice_i_Hosts(struct object_datamodel *a);
uint32 _LANDevice_i_Hosts_Host_i(struct object_datamodel *a);
uint32 _WANDevice_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANCommonInterfaceConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANCommonInterfaceConfig_Connection_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats_Total(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats_Showtime(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats_LastShowtime(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats_CurrentDay(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLInterfaceConfig_Stats_QuarterHour(struct object_datamodel *a);
uint32 _WANDevice_i_WANEthernetInterfaceConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANEthernetInterfaceConfig_Stats(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLConnectionManagement(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLConnectionManagement_ConnectionService_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANDSLDiagnostics(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANDSLLinkConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANATMF5LoopbackDiagnostics(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANEthernetLinkConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANPOTSLinkConfig(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANIPConnection_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANIPConnection_i_PortMapping_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANIPConnection_i_Stats(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i_PortMapping_i(struct object_datamodel *a);
uint32 _WANDevice_i_WANConnectionDevice_i_WANPPPConnection_i_Stats(struct object_datamodel *a);

int datamodel_get_var_typed_value(struct object_datamodel *a,
					uchar8 type,
					const void *value, uint32 len);
int datamodel_set_var_request(datamodel_variable_list * var,
					uchar8 type,
					const void * value, uint32 len);

#endif	/* End of _TR_069_1_0_0_H_ */
