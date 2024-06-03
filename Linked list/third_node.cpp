# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};

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
    free(head);
    free(current);

    
    return 0 ;
}