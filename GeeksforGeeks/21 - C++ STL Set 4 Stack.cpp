
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below methods*/
/*the function pushes an element
x into the stack s */
void push(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}
/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    //Your code here
    if(!s.empty()){
        int x = s.top();
        s.pop();
        return x;
    }
    return -1;
}
/*returns the size of the stack */
int getSize(stack<int> &s)
{
   //Your code here
   return s.size();
}
/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   //Your code here
   if(!s.empty()){
       return s.top();
   }
   return -1;
}