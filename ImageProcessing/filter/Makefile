.SUFFIXES:.o .cpp
CC = g++
CFLAGS = -g -Wall
OUTPUT = libfilter.a
OBJFILE = grayscale.o sharpening.o rotate.o sobel.o brightness.o
LIB = `pkg-config opencv --cflags --libs`
.PHONEY:clean

$(OUTPUT):$(OBJFILE)
	ar rv $(OUTPUT) $(OBJFILE)
	mv $(OUTPUT) ../lib

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@ $(LIB)

clean:
	rm $(OBJFILE)

