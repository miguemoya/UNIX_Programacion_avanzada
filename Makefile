BINS=ej1-1 ej1-2 ej1-3 mic.o mi_strerror
CC=gcc
CFLAGS= -g -Wall -I $(HOME)/include  -L$(HOME)/lib

all: $(BINS)

clean:
	rm -f $(BINS) 
	
ej1-1:
	$(CC) $(CFLAGS) -o ej1-1 ej1-1.c 
ej1-2:
	$(CC) $(CFLAGS) -o ej1-2 ej1-2.c -lmic
ej1-3:
	$(CC) $(CFLAGS) -o ej1-3 ej1-3.c -lmic
mic.o:
	$(CC) $(CFLAGS) -c mic.c 
	
mi_strerror:
	$(CC) $(CFLAGS) -o mi_strerror mi_strerror.c
	
