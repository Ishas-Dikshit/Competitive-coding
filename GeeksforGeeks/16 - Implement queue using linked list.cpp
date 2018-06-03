
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        // Your Code
        
        QueueNode * temp = (QueueNode *)malloc(sizeof(QueueNode));
        temp->next = NULL;
        temp->data = x;
        if(rear == NULL){
            rear = front = temp;
            return;
        }
        QueueNode * current = front;
        while(current != rear){
            current = current->next;
        }
        current->next = temp;
        rear = temp;
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        // Your Code  
        if(front == NULL){
            return -1;
        }
        int data = front->data;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
    return data;
}
