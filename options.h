#ifndef OPTIONS_H_
#define OPTIONS_H_

// Will add a good to the binary search tree, and checking where to put it.
void add_good(); 

// Fixing the information for a good, all information
void add_good_info(Good *pWare);

// Will remove a good from the tree, and replace one of the lower nodes to fill in the hole.
void remove_good();

// Edit will change an option on a ware so needs -LISTING-
void edit_good();

// Print good does what it sais
void print_good();

// Listing all the goods in the warehouse
void list_warehouse();

// Listing with choice
void list_chooseGood();

#endif // OPTIONS_H_
