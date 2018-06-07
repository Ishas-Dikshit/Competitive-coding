
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of the node of the linked list is
struct Node
{
	int data;
	struct Node *next;
};
*/
// complete this function
void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     Node * current = (*p);
     Node * currenta = (*q);
     int c = 0;
     int d = 0;
     Node * temp = NULL;
     Node * z = NULL;
     while(current != NULL){
         current = current->next;
         c++;
     }
     while(currenta != NULL){
         currenta = currenta->next;
         d++;
     }
     current = (*p);
     currenta = (*q);
     if(c == d){
         while(c != 0){
             temp = current->next;
             current->next = currenta;
             z = currenta->next;
             currenta->next = temp;
             current = temp;
             currenta = z;
             c--;
             if(c==0){
                 *q = currenta;
             }
             
         }
        }else if(c<d){
            while(c!=0){
             temp = current->next;
             current->next = currenta;
             z = currenta->next;
             currenta->next = temp;
             current = temp;
             currenta = z;
             c--;
             if(c==0){
                 *q = currenta;
             }
             
            }
         }else{
             while(d!=0){
                 temp = current->next;
                current->next = currenta;
                z = currenta->next;
                currenta->next = temp;
                current = temp;
                currenta = z;
                d--;
                *q = NULL;
             }
         }
     
     
     
     
     
}