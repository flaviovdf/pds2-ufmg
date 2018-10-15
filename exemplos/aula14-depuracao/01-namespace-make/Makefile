CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

magic:
	@mkdir build/magic/
	$(CC) $(CFLAGS) -c src/magic/carta.cpp -o build/magic/carta.o

uno:
	@mkdir build/uno/
	$(CC) $(CFLAGS) -c src/uno/carta.cpp -o build/uno/carta.o

main: magic uno
	$(CC) $(CFLAGS) build/magic/carta.o build/uno/carta.o src/main.cpp -o main

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)

.PHONY: clean
