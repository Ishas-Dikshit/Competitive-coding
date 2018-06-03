
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  // code here
  struct Node * current = head->next;
  printf("%d",head->data);
  printf(" ");
  
  while(current != head){
      printf("%d", current->data);
      printf(" ");
      current = current->next;
  }
}
