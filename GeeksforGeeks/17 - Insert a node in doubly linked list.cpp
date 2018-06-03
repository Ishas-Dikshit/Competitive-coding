
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */
/* Function to insert into a Doubly Linked List */
void addNode(struct Node **head_ref,int pos,int data)
{
//Your code here
Node * current = (*head_ref);
Node * temp = (Node *)malloc(sizeof(Node));
temp->data = data;
temp->next = NULL;
temp->prev = NULL;
Node * z;
current = (*head_ref);
while(pos !=0){
    current = current->next;
    pos--;
}
z = current->next;
current->next = temp;
temp->prev = current;
temp->next = z;
if(z != NULL){
z->prev = temp;
}
}