.SUFFIXES:.o .c
CC = gcc
CFLAGS = -g -Wall
OUTPUT = libfilter.a
OBJFILE = brightness.o leftright.o updown.o grayscale.o leftrotate.o rightrotate.o

.PHONEY:clean

$(OUTPUT):$(OBJFILE)
	ar rv $(OUTPUT) $(OBJFILE)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(OUTPUT)

