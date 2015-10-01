/*

Main loop with alternatives and
calls for options.c

Will be using a global pointer as root node, so no need to send it to every function
try to make it as a constant if possible. So nothing can change it.


*/

#include <stdio.h>
#include <ctype.h>

#include "main.h"
#include "object.h"
#include "tree.h"
#include "undo.h"
#include "stdscan.c"

#define S_HEIGHT 40

int load_menu();
bool handle_menu_input(char);
void clean_screen();
void print_meny();

int main() {

    load_menu();
    return 0;

}

// TODO Skapa en UI-modul eller liknande.

int load_menu() {

    bool exit = false;

    clean_screen();

    while(!exit) {


        print_meny();

        printf("What do you want to do?: ");
        char input;
        input = ask_for_char("Choice: ", "AaRrEePpUuLlQq");
        exit = handle_menu_input(input);


    }

    printf("Exiting warehouse...");
    return 0;

}

bool handle_menu_input(char c) {

    switch(tolower(c)) {

        case 'a':
        case 'r':
        case 'e':
        case 'i':
        case 'w':
        case 'u':
            printf("Pressed %c.\n", c);
            break;

        case 'q':
            return true;
            break;

        default:
            printf("%c is not implemented yet.\n", c);
            break;

    }

    return false;

}

void print_meny(){
  printf("\nWarehouse program 2.0\n"
  "===========================================\n"

  "[a]dding a ware\n"
  "[r]emoving a ware\n"
  "[e]diting the information\n"
  "[i]nformation about a ware\n"
  "[w]ares in the database\n"
  "[u]ndoing the last action\n"
  "[q]uit\n");

}

void clean_screen() {

  int i;

  for ( i = 0; i < S_HEIGHT; i++ )
    putchar ( '\n' );

}
