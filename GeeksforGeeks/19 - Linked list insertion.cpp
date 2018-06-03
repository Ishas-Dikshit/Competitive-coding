
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
     node * temp = (node *)malloc(sizeof(node));
    temp->data = newData;
    temp->next = NULL;
    // Code here
    if((*headRef) !=NULL){
        temp->next = (*headRef);
        (*headRef) = temp;
    }else{
        (*headRef) = temp;
    }
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    // Code here
    
    node * temp = (node *)malloc(sizeof(node));
    temp->data = newData;
    temp->next = NULL;
    if(*headRef != NULL){
        node * current = (*headRef);
        while(current->next != NULL){
            current = current->next;
        }
        current->next = temp;
    }else{
        (*headRef) = temp;
    }
}