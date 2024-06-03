# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};
struct node* tail (struct node* p)
{
    struct node* ptr = p; 
    if (ptr ->link == nullptr)
    {
        return p;
    }
    while (ptr->link != nullptr)
    {
        ptr=ptr->link;
    }
    return ptr ;

}
void add_node (int value , struct node* tail)
{
    struct node* curr =  (struct node*)malloc(sizeof(struct node));
    curr -> data = value ;
    curr ->link = nullptr;
    tail->link = curr;
    cout<<"Node added successfully"<<endl; 
    return ;
    
}

void print (struct node* p)
{
    struct node* ptr = p ;
    int count = 0 ;
    if (ptr == nullptr)
    {
        cout<<"The linked list is empty !!!";
        return ;
    }
    while (ptr!=nullptr)
    {
        count++ ;
        cout<<"Data in the node : "<<count<<" :";
        cout<<ptr->data<<endl;
        ptr = ptr -> link ;
    }
    cout<<"The number of nodes is : "<<count<<endl;
    

}
int main ()
{
    struct node* current ;
    struct node* head ;

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

    struct node* t = tail(head);
    add_node(60,t);
     t = tail(head);
    add_node(6,t);
     t = tail(head);
    add_node(606,t);
     t = tail(head);
    print(head);

    free(head);
    free(current);

    
    return 0 ;
}