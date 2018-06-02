
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/
int getCount(struct node* head){
//Code here
    node * current = head;
    int count = 0;
    while(current != NULL){
        current = current->next;
        count++;
    }
    return(count);
}
