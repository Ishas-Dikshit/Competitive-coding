
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void levelOrder(Node* node)
{
  //Your code here
  queue<Node *> q;
  q.push(node);
  while(!q.empty()){
      Node * temp = q.front();
      cout<<temp->data<<" ";
      if(q.front()->left){
          q.push(q.front()->left);
      }
      if(q.front()->right){
          q.push(q.front()->right);
      }
      q.pop();
  }
}
