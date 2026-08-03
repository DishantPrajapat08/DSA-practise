// Print prime no from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 1)
    {
        cout << "Not Prime";
    }

    else if (n >= 2 && (n % 3 != 0 && n % 2 != 0)||n==2||n==3)
    {
        cout << "Prime numbers are : ";
        for (int i = 2; i <= n; i++)
        {
            if (i == 2)
            {
                cout <<"2 ";
            }

            if (i == 3)
            {
                cout << "3 ";
            }

            else if (i % 3 != 0 && i % 2 != 0)
            {
                cout << i<<" ";
            }
        }
    }
    else 
    {
        cout << "Not prime";
    }

    return 0;
}