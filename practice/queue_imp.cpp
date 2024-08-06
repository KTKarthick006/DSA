#include <iostream>
using namespace std ;

#define MAX_SIZE 10

class Queue 
{
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue element.\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
        cout << "Enqueued element: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue element.\n";
            return;
        }
        cout << "Dequeued element: " << arr[front] << endl;
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < rear + 1; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }

    

    
};

int main() {
    Queue queue;
    int ch , x ;

   do
   {
    cout<<"MENU"<<endl;
    cout<<"1-Enqueue\n2-Dequeue\n3-Display\n4-Exit\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter an element to enqueue : ";
        cin>>x;
        queue.enqueue(x);
        break;
    case 2 :
        queue.dequeue();
        break;
    case 3 :
        queue.display();
        break;
    case 4 :
        cout<<"A program by 23BIT0290"<<endl;
        break;
    default:
        cout<<"Enter a valid choice "<<endl;
        break;
    }
   } while (ch!=4);
   
    return 0;
}