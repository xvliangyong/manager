myapp:main.o sub.o
	gcc -o myapp main.o sub.o
main.o:main.c
	gcc -c main.c -o main.o
sub.o:sub.c sub.h
	gcc -c sub.c -o sub.o
clean:
	rm myapp
