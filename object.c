#include "object.h"

// Symbolizes a specific place in the warehouse
// no 2 different wares can exist in the same place
// View: A2, B54 and so on
typedef struct Shelf {
  char letter;
  int number;
} Shelf;

// The Goods in the warehouse example:
/*
  Name: Computer
  Description: Macbook Stone
  Shelf: C3
  Amount: 2000
  Price: 15000
*/
typedef struct Good {
  char *name;
  char *description;
  Shelf shelf;
  int amount;
  int price;
} Good;


// Building stone for the binary tree
// Simple enough structure, can be remade into void pointer instead of Good pointer
typedef struct Node {
  struct Node *nodeLeft;
  struct Node *nodeRight;
  Good *good;
} Node;


// Will be used to save all action, instead of just one. In a linked list
typedef struct Action {
  struct Action *nextAction;
  enum { NOTHING, ADD, REMOVE, EDIT } typeOfAction;
  
  // Need to be pointers and information here, to nodes or goods

} Action;


// Maybe have shoppingcart as a linked list
typedef struct ShoppingCart {
  Good *nextGood;
  int cartPrice;
  int amountOfGoods;
} ShopCart;
