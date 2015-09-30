/*

Tree will take care of the root node and work with memory allocation and freeing it

 */


Node* node_construct() {
  Node *pNode = malloc(sizeof(struct Node));
  //Memmory checking here then done, if not malloc is a problem.
  return pNode;
}

// Freeing the memory from the node
void node_destruct(Node *pNode) {
  free(pNode);
}
