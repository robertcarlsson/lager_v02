lager: main.c object.c options.c stdscan.c tree.c undo.c
	gcc -std=c11 -Wall -ggdb -o lager main.c
