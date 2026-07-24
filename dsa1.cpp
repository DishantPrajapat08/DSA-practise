//sum of all no  from 1 to n which are divisible by 3
# include <iostream>
using namespace std;

int main(){
    int a;
    int sum=0;
    cout<<"Enter the value of a"<<endl;
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
    }

     cout<<sum;

    return 0;
}