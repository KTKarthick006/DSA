# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};

void insert_in_beg (struct node** head , int value)                           //stuct node* insert_in_beg(struct node*head)
{                                                                             //{
    struct node* front = (struct node*)malloc(sizeof(struct node));           //struct node* front = (struct node*)malloc(sizeof(struct node));  
    front -> data = value ;                                                   //front -> data = value ; 
    front -> link = *head ;                                                   //front -> link = head ;
    *head = front ;                                                           //head = front ;
                                                                              //return head ;
}                                                                              //}

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
    cout<<"printed"<<endl;
    
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
    
    print_data(head);
    insert_in_beg(&head , 300);                                                 // head = insert_in_bed(head,300);
    print_data(head);

    free(head);
    


    return 0 ;
}