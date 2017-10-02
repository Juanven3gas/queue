main_program: main.o queue.o 
	gcc main.o queue.o -o main_program

main.o: main.c queue.h
	gcc -Werror -Wall -ggdb main.c -c

queue.o: queue.c queue.h
	gcc -Wall -Werror -ggdb queue.c -c

clean:
	rm *.o main_program