
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node * current = head;
   do{
       if(current->next == NULL){
           return false;
           
       }else if(current->next == head){
           return true;
       }
       current = current->next;
   }while(current != head);
}
