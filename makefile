CC = gcc
FLAGS = -Wall -std=c11 -ggdb
 
lager: main.c object.c options.c stdscan.c tree.c undo.c
	$(CC) $(FLAGS) -o lager main.c

# %.o %.c %.h
	$(CC) $(FLAGS) $^ -c	