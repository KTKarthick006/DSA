# include <iostream>
#define size 5 
using namespace std ;

class circular_queue
{
    private :
        int items [size] , front , rear ;
    public :
        int is_full();
        int is_empty();
        void display();
        void enqueue();
        void dequeue();

        circular_queue()
        {
            front = -1 ;
            rear = -1 ;
        }
        int is_empty() ;
        int is_full() ;

};

int circular_queue :: is_empty()
{
    if (front ==-1 && rear ==-1)
    {
        return 1 ;
    }
    return 0;
}

int circular_queue :: is_full ()
{
    if (rear == size-1 && front == 0)
    {
        return 1 ;
    }
    if (rear +1 == front)
    {
        return 1;
    }
    
    return 0 ;
}

void circular_queue :: enqueue ()
{
    if (is_full())
    {
        cout<<"The queue is full";
        return ;
    }
    int x ;
    cout<<"Enter an element to insert : " ;
    cin>>x ;
    if (front == -1) front = 0 ;
    rear = (rear +1)% size ;
    items[rear] = x ;
    cout<<"Element "<<x<<" is inserted";
}