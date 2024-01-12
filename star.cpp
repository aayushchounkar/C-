 #include <iostream>
using namespace std;
int main (){
    int i,j,rows;
    cout<<"enter nos of rows you want :\n";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<i+1;j++){ 
            cout<<"*";
 
        }
        cout<<endl;
    } 
    return 0;
}
// #include <iostream>
// using namespace std;
// int main (){
//     int i,j,rows;
//     cout<<"enter nos of rows you want :\n";
//     cin>>rows;
//     for(i=1;i<=rows;i++){
//         for(j=1;j<i+1;j++){ 
//             cout<<j;
 
//         }
//         cout<<endl;
//     } 
    // return 0;
// }