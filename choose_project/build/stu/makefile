myapp:main.o stu.o
	gcc -o myapp main.o stu.o
main.o:main.c
	gcc -c main.c -o main.o
stu.o:stu.c stu.h
	gcc -c stu.c -o stu.o
clean:
	rm app
