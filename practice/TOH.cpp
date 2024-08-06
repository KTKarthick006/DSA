#include <iostream>
#include <stack>
using namespace std;


void towersOfHanoi(int n, stack<int>& source, stack<int>& auxiliary, stack<int>& destination) {
    if (n > 0) 
    {
        
        towersOfHanoi(n - 1, source, destination, auxiliary);

        
        int disk = source.top();
        source.pop();
        destination.push(disk);
        cout << "Move disk " << disk << " from source to destination" << endl;

        
        towersOfHanoi(n - 1, auxiliary, source, destination);
    }
}

int main() 
{
    int n = 3; 

    stack<int> source, auxiliary, destination;

    
    for (int i = n; i >= 1; i--) {
        source.push(i);
    }

    
    towersOfHanoi(n, source, auxiliary, destination);

    return 0;
}