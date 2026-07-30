// Homework
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char m = 'A';
    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i <= l; i++)
        {
            cout << m;
        }
        m += 1;
        cout << endl;
    }
    return 0;
}