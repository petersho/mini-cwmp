PROG_NAME = cwmp-datamodel
OBJ = var_api.o tr-069-1-0-0.o cwmp-datamodel.o
CFLAGS = -O0 -g -I./include -Wall -Werror
LDFLAGS =

all: $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(PROG_NAME)

$(OBJ):
	$(CC) $(CFLAGS) -c $*.c

clean:
	rm -f *.o cwmp-datamodel
