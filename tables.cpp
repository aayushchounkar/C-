#include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter a number : \n";
    cin>>a;
    int z;
    cout<<"enter a number till where tou want to multiply nos";
    cin>>z;
    for( int i = 1; i<=z; i++){
       int prod = a * i;
        cout << a << " x " << i << " = " <<prod << endl;
    }
    return 0;
} 