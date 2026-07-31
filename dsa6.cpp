// Homework
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
       
        for (int j = i; j >= 0; j--)
        {
            char m= 'A'; 
        
            cout << char (m+j) ;
        
        }
        cout << endl;
    }
    return 0;
}
