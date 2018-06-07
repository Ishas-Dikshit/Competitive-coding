
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    Node * current = head;
    Node * temp = head->next;
    while(current->next != NULL  && current != NULL){
       temp = current->next;
       if(temp->next == NULL){
           current->next = NULL;
           free(temp);
       }else{
            current->next = temp->next;
            free(temp);
            current = current->next;
       }
      
    }

}
