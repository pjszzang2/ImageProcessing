.SUFFIXES:.o .c
CC = gcc
CFLAGS = -g -Wall
OUTPUT = pmanager
OBJFILE = pmanager.o
MYLIB = -L../filter
HEAD = -I../lib
.PHONEY:clean

$(OUTPUT):$(OBJFILE)
	$(CC) -o $(OUTPUT) $(MYLIB) -lfilter $(OBJFILE)

.c.o:
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	rm *.o $(OUTPUT)

