CC = gcc
FLAGS = -Wall -std=c11 -ggdb

lager: main.c object.c options.c stdscan.c tree.c undo.c
	$(CC) $(FLAGS) -o lager.out main.c

# %.o %.c %.h
	$(CC) $(FLAGS) $^ -c

clean:
	find . -name "*.out" -type f -print -delete
	find . -name "*.o" -type f -print -delete
	find . -name "*.dSYM" -type d -print -exec rm -r {} +
