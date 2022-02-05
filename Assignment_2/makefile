# Macros ========================================

CC=g++
CFLAGS=-c -g -Wall -Wextra -Werror -ansi -pedantic -O -Wconversion
OUTDIR=gnu/
ERASE=rm
OBJECTS=$(OUTDIR)main.o
EXE=main

# Targets ========================================

$(EXE) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXE)

$(OUTDIR)main.o : main.cpp Huffman_LongestLength.cpp
	$(CC) $(CFLAGS) main.cpp -o $(OUTDIR)main.o

$(OUTDIR)Huffman_LongestLength.o : Huffman_LongestLength.cpp Huffman_LongestLength.h
	$(CC) $(CFLAGS) Huffman_LongestLength.cpp -o $(OUTDIR)Huffman_LongestLength.o	
	
clean :
	$(ERASE) $(EXE) $(OBJECTS)

all :
	tablen main.cpp
	tablen Huffman_LongestLength.cpp
	tablen Huffman_LongestLength.h
	doxygen Doxyfile