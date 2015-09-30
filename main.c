/*

Main loop with alternatives and 
calls for options.c

Will be using a global pointer as root node, so no need to send it to every function
try to make it as a constant if possible. So nothing can change it.


*/
#include <stdio.h>
#include "main.h"
#include "object.h"
#include "tree.h"
#include "undo.h"
#include "stdscan.c"


int main() {
  // I put the mainChoice to 1 instead of a do while loop.
  char mainChoice = 1;

  // While you dont Quit you keep going in the meny
  while(mainChoice == 'Q' || mainChoice == 'q') {

    print_meny();
    mainChoice = ask_for_char("Choice: ", "AaRrEePpUuLlQq");

    }
  return 0;
}

void print_meny() {
  printf("\n\n Welcome to Warehouse 2\n"
	 "[A]dd a good\n"
	 "[R]emove a good\n"
	 "[E]dit a good\n"
	 "[P]rint a good\n"
	 "[U]ndo a bad decision\n"
	 "[L]ist everything\n"
	 "[Q]uit this amazing program\n");
}

