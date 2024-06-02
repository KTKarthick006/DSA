//program to create a single node 
# include <iostream>
using namespace std ;

struct node 
{
    int data ;
    struct node* link ; 
};

int main ()
{
    struct node* head ;
    head = (struct node*) malloc (sizeof(struct node ));
    head ->data=15;
    head ->link = nullptr;
    cout<<"The data in the node is : "<<head -> data<<endl;
    cout<<"The link in the node is : "<<head -> link<<endl;
    free(head);
    return 0 ;

}