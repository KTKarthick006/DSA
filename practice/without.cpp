#include <iostream>
using namespace std ;

#define MAX_SIZE 10

class Queue
{
    public:
        int q , x , rq ,y ,pop;
        Queue()
        {
            q =0 ;
            rq = 0 ;
            pop=0;
        }
        void enqueue()
        {
            cout<<"Enter an element to enqueue : ";
            cin>>x;
            q=q*10+x;
            cout<<q<<endl;
        }
        void reverse()
        {
            while(q>0){
            y = q%10 ;
            rq = rq*10 + y ;
            q=q/10;
        
            }
            cout<<rq<<endl;

        }
        void dequeue()
        {
            
            
            int d ;
            cout<<"The removed element is : "<<rq%10;

            d = rq %10;
            rq = rq /10 ;
            cout<<rq<<endl;

        }
        
};

int main ()
{
    Queue q ;
    q.enqueue();
    q.enqueue();

    q.enqueue();
    q.reverse();
    q.dequeue();
    q.dequeue();
    return 0 ;
}