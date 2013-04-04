#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tr-069-1-0-0.h>

int
value_output(struct object_datamodel *a)
{
	switch (a->output_mode) {
	case MODE_PIPE:
		switch (a->var_list->type) {
		case ASN_BOOLEAN:
			break;
		case ASN_UNSIGNED_INT:
			break;
		case ASN_INTEGER:
			break;
		case ASN_STRING:
			printf("Get parameter: len = %d names = %s\n",
					a->var_list->val_len,
					a->var_list->buf);
			break;
		}
		break;
	case MODE_UDPSOCKET:
		switch (a->var_list->type) {
		case ASN_BOOLEAN:
			break;
		case ASN_UNSIGNED_INT:
			break;
		case ASN_INTEGER:
			break;
		case ASN_STRING:
			break;
		}
		break;
	}

	return 0;
}

int
datamodel_get_var_typed_value(struct object_datamodel *a,
				uchar8 type,
				const void *value, uint32 len)
{
	datamodel_variable_list *head = NULL;
	datamodel_variable_list *current = NULL;
	datamodel_variable_list *prev = NULL;

	current = (datamodel_variable_list *)malloc(sizeof(datamodel_variable_list));

	if (current == NULL) {
		printf("Error!!!\n");
		return 1;
	}
	a->var_list = current;

	current->type = type;
	current->val_len = len;

	switch (current->type) {
	case ASN_BOOLEAN:
		break;
	case ASN_UNSIGNED_INT:
		break;
	case ASN_INTEGER:
		break;
	case ASN_STRING:
		strncpy(current->buf, value, len);
		break;
	}
	value_output(a);

	current->next_variable = NULL;

	if (head == NULL) {
		head = current;
		prev = current;
	} else {
		prev->next_variable = current;
	}
	prev = current;


	return 0;
}

int
datamodel_set_var_request(datamodel_variable_list * var,
					uchar8 type,
					const void * value, uint32 len)
{
	return 0;
}
