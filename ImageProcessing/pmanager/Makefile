.SUFFIXES:.o .cpp
CC = g++
CFLAGS = -g -Wall
OUTPUT = Image_Processing
OBJFILE = pmanager.o
MYLIB = -L../lib
HEAD = -I../lib
LIB = `pkg-config opencv --cflags --libs`
INPUT = pmanager.cpp

.PHONEY:clean

$(OUTPUT):$(INPUT)
	$(CC) $(HEAD) $(INPUT) $(MYLIB) -lfilter -o $(OUTPUT) $(LIB)

clean:
	rm $(OUTPUT)

