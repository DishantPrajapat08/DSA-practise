// Homework
# include <iostream>
using namespace std;

int main()
{
    int n=5 ;
    char m='A';
    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<m;
            m+=1;
        }
        cout<<endl;
    }

    return 0;
}