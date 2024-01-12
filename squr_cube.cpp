#include <iostream>
using namespace std;

int square(int n){
    int sqr=n*n;
    return sqr;
}
int cube(int n){
    int cube=n*n*n;
    return cube;
}
        
int main(){
    int n,choice;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Option 1-Square\n";
    cout<<"Option 2-Cube\n";
    cout<<"Option 3-Both\n";
    cout<<"Option 4-Exit\n";
    cout << "Enter a choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1: 
        
        cout<<"square of "<<n<<"="<<square(n)<<endl;
        break;
    case 2:

        cout<<"cube of "<<n<<"="<<cube(n)<<endl;
        break; 

    case 3: 
        cout<<"square of "<<n<<"="<<square(n)<<endl;
        cout<<"cube of "<<n<<"="<<cube(n)<<endl;
        break;

    case 4:
        cout<<"system hang";
        exit(0);    
    default:
        cout<<"invalid input";
        break;
    }


    return 0;
}