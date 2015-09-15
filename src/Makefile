FILENAME = httpsredir

CFLAGS  = $(CFLAGS) -I$(STAGING_DIR)/usr/include
LDFLAGS = $(LDFLAGS) -lmicrohttpd -Wl,-rpath-link=$(STAGING_DIR)/usr/lib

OBJ = httpsredir.c

all:
	$(CC) $(CFLAGS) -c -o httpsredir.o httpsredir.c
	$(CC) $(CFLAGS) $(LDFLAGS) \
		-o $(FILENAME) $(OBJ)

clean:
	rm -f $(FILENAME)
