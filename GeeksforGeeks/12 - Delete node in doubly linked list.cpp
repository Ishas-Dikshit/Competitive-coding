
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*struct Node
{
  int data;
  Node *next;
  Node *prev;
};
 */
void deleteNode(Node **head_ref, Node *del)
{
  //Your code here
  Node * current = (*head_ref);
    
    if(current == del){
        (*head_ref) = (*head_ref)->next;
        (*head_ref)->prev = NULL;
    }else{
        while(current->next != del){
        current = current->next;
        }
        Node * temp = del->next;
        current->next = temp;
        if(temp!= NULL){
            temp->prev = current;
        }
        free(del);
    }
}