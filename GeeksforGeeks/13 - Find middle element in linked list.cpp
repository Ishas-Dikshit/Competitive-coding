
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   // Your code here
   int l=0;
   Node *current = head;
   Node * val = head;
   while(current != NULL){
       current = current->next;
       l = l+1;
    }
    if(l%2 != 0){
        l = l/2;
        int c = 1;
        while(c != l+1){
            c++;
            val = val->next;
        }
    }
    else{
        l = l/2;
        int c = 1;
        while(c != l+1){
            c++;
            val = val->next;
        }
    }
    return val->data;
    
}
