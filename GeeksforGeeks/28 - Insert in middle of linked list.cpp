
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the Node of the linked list is as
struct Node {
	int data;
	Node* next;
};
*/
// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node * current = head;
	Node * temp = (Node *)malloc(sizeof(Node));
	temp->data = x;
	temp->next = NULL;
	int c = 0;
	Node * a = NULL;
	while(current != NULL){
	    current = current->next;
	    c++;
	}
	current = head;
	if(c%2 !=0){
	    c = c/2;
	    while(current != NULL &&c !=0){
	        current = current->next;
	        c--;
	    }
	    a = current->next;
	    temp->next = a;
	    current->next = temp;
	}else{
	    c = c/2;
	    while(current!=NULL && c!=1){
	        current = current->next;
	        c--;
	    }
	    temp->next = current->next;
	    current->next = temp;
	    
	}
	return head;
}