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
        //void dequeue () ; 
        void print_queue();
    queue ()
    {
        front = -1 ;
        rear = -1 ;
    }
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
    
    for (int i = 0; i < rear+1; i++)
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

int main ()
{
    class queue q ;
    int ch , x ;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1-Is Empty "<<endl;
        cout<<"2-Is full"<<endl;
        cout<<"3-peek"<<endl;
        cout<<"4-print"<<endl;
        cout<<"5-Enqueue"<<endl;
        cout<<"6-Dequeue "<<endl;
        cout<<"7-Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            if(q.is_empty())
            {
                cout<<"The queue is empty"<<endl;
            }
            else
            {
                cout<<"The queue is not empty"<<endl;
            }
            
            break;
        
        case 2:
            if (q.is_full())
            {
                cout<<"The queue is full "<<endl;
            }
            else
            {
                cout<<"The queue is not full "<<endl;
            }
            
            
            break;

        case 3:
            q.peek();
            break;
        
        case 4:
            q.print_queue();
            break;
        
        case 5:
            int x ;
            cout<<"Enter the element : ";
            cin>>x;
            q.enqueue(x);
            break;
        case 6:
            //q.dequeue();
            break;
        case 7:
            cout<<"Exit"<<endl;  
            break;
        default:
            cout<<"Enter a valid choice"<<endl;
            break;
        }
    } while (ch!=7);
    return 0 ; 
}