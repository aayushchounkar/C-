// #include<iostream>
// using namespace std;

// int main (){
//     int a;
//     cout<<"enter a size of array";
//     cin>>a;
//     int ash[a];

//     for(int i=0;i<a;i++){
//     cin>>ash[i];}
//     int value;
//     cout<<"enter value of element yoou want to search for:";
//     cin >>value;
//     for(int i=0;i<a;i++){
//         if (ash[i]==value){
//         cout<<"the value is present in array"<<i<<endl;
//         break;
//     }
// }
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int a;
    bool isPresent=false;
    cout<<"Enter size of an array";
    cin>>a;
    int ash[a];
     cout <<"enter elements of array"<<endl;
    for(int i=0;i<a;i++){
    cin>>ash[i];}

    int value;
    cout<<"enter the value you want to search for";
    cin>>value;
    for(int i=0;i<a;i++){
        if(ash[i]==value){
            isPresent=true;
            cout<<"the value is present in array at index "<<i<<endl;
            return 0;       
        }
    }
    if(isPresent==false){
        cout << "Not available in array.\n";
    }
    return 0;
}