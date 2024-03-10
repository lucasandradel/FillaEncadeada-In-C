all: fila.o
	gcc main.c fila.o -o prog
	./prog


fila.o: fila.c
	gcc -c fila.c

clean:

	rm *.o prog