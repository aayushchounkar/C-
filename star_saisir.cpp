#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    // cout<<"enter the number of rows you want:\n";
    // cin>>rows;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     return 0;
}