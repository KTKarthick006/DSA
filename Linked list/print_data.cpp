# include <iostream>
using namespace std ;

struct node
{
    int data ; 
    struct node* link ;
};

void print_data(struct node* p)
{
    struct node* ptr = nullptr;
    ptr = p ;

    if (ptr == nullptr)
    {
        cout<<"The linked list is empty " ;
        return ;
    }
    while (ptr != nullptr)
    {
        cout<<ptr -> data<<endl ;
        ptr = ptr->link ;
    }
    
};


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
    
    cout<<"The data in the linked list is : "<<endl;
    print_data(head);

    free(head);
    free(current);
    
    return 0;
}