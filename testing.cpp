#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a value ";
    cin>>num;
    int fact=1;
    // while(num>0)
    // {
    //     fact=fact*num;
    //     num--;

    // }
    for(int i =1; i<=num;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}