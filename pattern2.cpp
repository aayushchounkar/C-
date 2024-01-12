#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    // cout<<"enter the number of rows you want:\n";
    // cin>>rows;
    for(i=0;i<6;i++){
        for(j=5;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
     return 0;
}