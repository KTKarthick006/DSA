# include<iostream>
using namespace std ;

struct node
{
    int data ;
    struct node* link ;
};
struct node * prev (struct node* head , int pos)
{
    struct node* ptr = head ;
    int count = 1 ;
    int exp = pos-1 ;
    while (count != exp)
    {
        ptr = ptr ->link ;
        count++;
    }
    return ptr ;
    
}

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
    cout<<"Done"<<endl;
    
};

void insert(int value ,struct node * p )
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->link = p ->link ;
    p->link = n ;
    n -> data = value ;
}

int main ()
{
    int pos = 4 ;
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

    print_data(head);
    insert(60,prev(head , pos));
    insert(600,prev(head , 5));

    print_data(head);
    free(head);


    return 0 ;
}