#include <iostream>
using namespace std;
int main (){
    int a,sum=0;
    int i=1;
    cout<<"Enter the number"; 
    cin>>a;

    while (i<a+1)
    {
        sum=sum+i;
        i++;
    }
      cout<<sum;
       
       return 0;

    
}