#include "object.h"

typedef struct Shelf {
  char letter;
  int number;
} Shelf;

typedef struct Good {
  char *name;
  char *description;
  Shelf shelf;
  int amount;
  int price;
} Good;

typedef struct Node {
  struct Node *nodeLeft;
  struct Node *nodeRight;
  Good *good;
} Node;

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
