myapp:main.o stu.o sub.o
	gcc -o myapp main.o stu.o sub.o
main.o:main.c 
	gcc -c main.c -o hello.o
stu.o:stu.c stu.h
	gcc -c stu.c -o stu.o
sub.o:sub.c sub.h
	gcc -c sub.c -o stu.o
clean:
	rm myapp main.o
