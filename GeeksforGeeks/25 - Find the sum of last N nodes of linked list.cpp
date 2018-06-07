
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the node of the linled list is as
struct Node {
	int data;
	struct Node* next;
};*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      Node * current = head;
      Node * temp;
      int c = 0;
      int sum = 0;
      while(current != NULL){
          current = current->next;
          c++;
      }
      current = head;
      int i = c-n;
      while(i != 0 && current !=NULL){
          current = current->next;
          i--;
      }
      
      while(current!=NULL){
          sum = sum+current->data;
          current = current->next;
      }
      return sum;
}