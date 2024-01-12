#include <iostream>
using namespace std;
int main(){
    int a,b,choice;
    cout<<"Enter a choice 1,2,3,4-";
    cin>>choice;
    cout<<"NUM1-";
    cin>>a;
    cout<<"NUM1-";
    cin>>b;
    if (choice==1){
        cout<<"the addition is ",a+b;
    }
    else if (choice==2){
        cout<<"the subs is ",a-b;
    }
    else if(choice==3) {
        cout<<"the the multiplication is ",a*b;
    }
    else if(choice==4) {
        cout<<"the division is ",a/b;
    }
    else{
        cout<<"invalid choice ";
    }
    return 0;
}