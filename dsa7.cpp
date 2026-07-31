// Homework
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " ";
        }

        char m = 'A';
        for (int j = i; j < n; j++)
        {
            cout << char(m + i);
        }
        cout << endl;
    }
    return 0;
}