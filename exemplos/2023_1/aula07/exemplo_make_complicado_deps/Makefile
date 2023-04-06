CC=clang
CFLAGS=-std=c++20 -Wall

all: main

carta.o: include/carta.h src/carta.cpp
	${CC} ${CFLAGS} -c src/carta.cpp

jogador.o: include/jogador.h include/carta.h src/jogador.cpp
	${CC} ${CFLAGS} -c src/jogador.cpp

baralho.o: include/baralho.h include/carta.h src/baralho.cpp
	${CC} ${CFLAGS} -c src/baralho.cpp

main.o: include/baralho.h include/carta.h include/jogador.h src/main.cpp
	${CC} ${CFLAGS} -c src/main.cpp

main: main.o baralho.o jogador.o carta.o
	${CC} ${CFLAGS} -o main main.o baralho.o jogador.o carta.o

clean:
	rm -f main *.o
