//Counting the number of nodes of a linked list 
# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};

int count_nodes(struct node* p)
{
    int count = 0 ; 
    if (p==nullptr)
    {
        cout<<"THE LINKED LIST IS EMPTY"<<endl;
    }
    else
    {
        struct node* ptr = nullptr;
        ptr = p;
        while (ptr!=nullptr)
        {
            count++;
            ptr = ptr->link;
        }
        
    }
    return count ;
}

int main ()
{
    struct node* head = nullptr;
    struct node* current ;

    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 10;
    head ->link = nullptr;

    current = (struct node*)malloc(sizeof(struct node));
    current ->data = 20 ;
    current ->link = nullptr;
    head -> link = current ;

    current = (struct node*)malloc(sizeof(struct node));
    current ->data = 30 ;
    current ->link = nullptr;
    head->link->link = current;
    
    cout<<"The number of nodes : "<<count_nodes(head)<<endl;

    free(head);
    free(current);
    
    return 0;
}