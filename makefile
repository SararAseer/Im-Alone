All: Hello.o
	gcc Hello.o

Hello.o: Hello.c
	gcc -c Hello.c

run:
	./a.out

clean:
	rm *.o
	rm *.out
