// Check ano is prime or not
# include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n==2 || n==3)
        cout << "Prime" << endl;
    else if(n%2==0 || n%3==0)
        cout << "Not Prime" << endl;
        else
            cout<< "Prime" << endl;
        
    return 0;
}