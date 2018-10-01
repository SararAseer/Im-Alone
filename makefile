hello: Hello.o
	gcc Hello.o

strings.o: Hello.c
	gcc -c Hello.c

run:
	./a.out

clean:
	rm *.o
	rm *.out
