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
    if ((rear + 1) % size == front)
    {
        return 1;
    }
    return 0;
}

void circular_queue :: display()
{
    // Function to display status of Circular Queue
    int i;
    if (is_empty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << "Front -> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % size)
        cout << items[i];
      cout << items[i];
      cout << endl
         << "Rear -> " << rear;
    }
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

void circular_queue :: dequeue ()
{
    int element;
    if (is_empty()) 
    {
      cout << "Queue is empty" << endl;
      return ;
    } 
    else 
    {
        element = items[front];
        if (front == rear) 
        {
            front = -1;
            rear = -1;
        }
        else  
        { 
            front = (front + 1) % size;
        }
      cout<<"element : "<<element<<" removed"<<endl;
    }
    
    
}
int main()
{
    class circular_queue q;
    int ch, x;
    do
    {
        cout << "Menu" << endl;
        cout << "1-Is Empty " << endl;
        cout << "2-Is full" << endl;
        cout << "3-print" << endl;
        cout << "4-Enqueue" << endl;
        cout << "5-Dequeue " << endl;
        cout << "6-Exit" << endl;

        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (q.is_empty())
            {
                cout << "The queue is empty" << endl;
            }
            else
            {
                cout << "The queue is not empty" << endl;
            }

            break;

        case 2:
            if (q.is_full())
            {
                cout << "The queue is full " << endl;
            }
            else
            {
                cout << "The queue is not full " << endl;
            }

            break;

        case 3:
            q.display();
            break;

        case 4:
            q.enqueue();
            break;
        case 5:
            q.dequeue();
            break;
        case 6:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    } while (ch != 6);
    return 0;
}