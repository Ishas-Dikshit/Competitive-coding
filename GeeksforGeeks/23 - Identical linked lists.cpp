
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
// return true if two list are identical else return false
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node * current1 = head1;
    Node * current2 = head2;
    int flag;
    while(current1 != NULL && current2 != NULL){
        if(current1->data != current2->data){
            flag = 1;
            break;
        }
        current1 = current1->next;
        current2 = current2->next;
    }if(flag == 1){
        return false;
    }else{
        return true;
    }
}