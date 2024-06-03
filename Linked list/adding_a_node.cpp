# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ;
};

int main ()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head ->data = 10;
    head ->link = nullptr;

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr ->data = 10;
    ptr ->link = nullptr;
    head ->link = ptr;
    free(ptr);
    free(head);
    return 0 ;
}