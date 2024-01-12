#include<iostream>
using namespace std;
int add(int x,int y,int r){
    int z;
    z=x+y+r;
    return z;
}

int main()
{
    int a,b,r,sum;
    cout<<"Enter values of a:"<<endl;
    cin>>a;

    cout<<"enter value of b:"<<endl;
    cin>>b;

    cout<<"enter value of r:"<<endl;
    cin>>r;

     sum=add(a,b,r);
     cout<<"addition is"<<sum;
    return 0;
}


