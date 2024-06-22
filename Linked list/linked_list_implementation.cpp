# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};


void traverse (struct node* ptr)
{
    struct node* p;
    p = ptr ;
    int count = 0 ;
    if (ptr == nullptr)
    {
        cout<<"The linked list is empty"<<endl;
        return ;
    }
    while (p !=  nullptr)
    {
        count++;
        cout<<"The element in the position "<<count<<" is : "<<p->data<<endl;
        p=p->link ;

    }
}

void insert_at_beg(struct node** h , int value)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n -> link = *h ;
    n -> data = value ;
    *h = n ;
}

void insert_at_position(struct node* h , int pos , int val)
{
    int c = 1 ;
    struct node* p = h ;
    struct node* n = (struct node*)malloc(sizeof(struct node));
    while (c!=pos-1)
    {
        c++;
        p = p->link ;   
    }
    n->link = p ->link ;
    p -> link = n ;
    n ->data = val ;
    cout<<"Node inserted"<<endl;

}

struct node* tail (struct node* head)
{
    struct node* ptr = head ;
    while (ptr!=nullptr)
    {
        ptr= ptr->link ;
    }
    return ptr ;
}

void insert_at_end (struct node* h , int val)
{
    struct node* t = tail(h);
    struct node* n = (struct node*)malloc(sizeof(struct node));
    t -> link = n ;
    n -> data  = val ;
    n -> link = nullptr ;
    cout<<"Node inserted "<<endl;
}

void search (struct node* h, int val)
{
    int count = 0 ;
    struct node * ptr = h ;
    if (h==nullptr)
    {
        cout<<"Linked list is empty !!"<<endl;
        return ;
    }
    while (ptr!= nullptr)
    {
        count++;
        if (ptr -> data == val)
        {
            cout<<"Element"<<val<< "found at hte node "<<count<<endl;
            return ;
        }
        
    }
    cout<<"Element not found"<<endl;
}

int count (struct node* head)
{
    int c = 0 ;
    struct node* ptr = head ;
    while(ptr != nullptr)
    {
        ptr = ptr -> link ;
        c ++ ;
    }
    return c ;
}

struct node* del_at_beg (struct node* h)
{
    h = h ->link ;
    return h ;
}

void del_at_end (struct node* h)
{
    struct node* ptr = h ;
    while (ptr->link->link != nullptr)
    {
        ptr = ptr ->link;
    }
    ptr -> link = nullptr ;
    
}

void del_at_mid(struct node* h , int pos)
{
    struct node* ptr = h ;
    for (int  i = 0; i < pos -1; i++)
    {
        ptr =ptr -> link ;
    }

    ptr ->link = ptr -> link -> link ;
    
}
int main ()
{
    cout<<"MENU"<<endl;
    cout<<"1-create a linked list"<<endl;
    cout<<"2-add in the beginning"<<endl;
    cout<<"3-insert at a position"<<endl;

    return 0 ;
}