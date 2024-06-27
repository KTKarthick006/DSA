# include <iostream>
using namespace std ;

# define max  5

class queue 
{
    int items [max];
    int front , rear ;

    public : 
        int is_empty () ;
        int is_full () ;
        void peek () ;
        void enqueue (int x ) ;
        void dequeue () ; 
        void print_queue();
};

int queue :: is_empty ()
{
    if ((front == -1) && (rear == -1))
    {
        return 1 ;
    }
    return 0 ;
}

int queue :: is_full ()
{
    if (front == 0 && rear == max-1)
    {
        return 1;
    }
    return 0 ;
    
}

void queue :: peek ()
{
    if (front ==-1 && rear == -1)
    {
        cout<<"The queue is empty"<<endl;
        return ;
    }
    
    int p = items[front];
    cout <<"The peak value is : "<<p<<endl;
}

void queue :: print_queue ()
{
    if (is_empty())
    {
        cout<<"The queue is empty"<<endl;
        return ;
    }
    
    for (int i = 0; i < rear; i++)
    {
        cout<<items[i]<<endl;
    }
    
}

void queue :: enqueue (int x )
{
    if (is_full())
    {
        cout << "The queue is full" << endl;
        return;
    }
    
    items[++rear] = x;
}