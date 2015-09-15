FILENAME = httpsredir

H_CFLAGS  = $(CFLAGS) -I$(STAGING_DIR)/usr/include
H_LDFLAGS = $(LDFLAGS) -lmicrohttpd -Wl,-rpath-link=$(STAGING_DIR)/usr/lib

OBJ = httpsredir.o debug.o

all:
	$(CC) $(H_CFLAGS) -c -o debug.o debug.c
	$(CC) $(H_CFLAGS) -c -o httpsredir.o httpsredir.c
	$(CC) $(H_CFLAGS) $(H_LDFLAGS) \
		-o $(FILENAME) $(OBJ)

clean:
	rm -f $(FILENAME)
