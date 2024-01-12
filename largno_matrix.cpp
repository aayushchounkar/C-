// #include <iostream>
// using namespace std;
// int main(){
//     int r,c;     //taking input of rows and columns for finding largest number in matrix
//     cout<<"Enter values of rows";
//     cin>>r;    //taken values of rows 
//     cout<<"Enter the value of column";
//     cin>>c;    //taken values of columns 
// //    declaration of 2D matrix
//     int matrix [r][c];

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//         cin>>matrix[i][j];}  //takin input of 2D array
//     }
//      //we have taken input of matrix now we have to find largest nos in matrix

//     for (int i=0;i<r;i++)
//     { 
//         int maxelement=matrix[i][0];
//         for(int j=1;j<c;j++) {
//             if(maxelement<matrix[i][j]){
//                 maxelement=matrix[i][j];
//             }
//        cout<<"The largest number in row is:"<<maxelement<<endl;
//        }
//     }

//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter number of row";
    cin>>r;
    cout<< "enter number of coloumn";
    cin>>c;
        
    cout<<"Enter elements of matrix";
    int matrix[r][c]; 
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>matrix[i][j]; 
        }
    }

    for(int i=0;i<r;i++){
        int maxelement=matrix[i][0];
        for(int j=1;j<c;j++){
            if(maxelement<matrix[i][j]){
                maxelement=matrix[i][j];
            }
            cout<<"the largest number in rowis:"<<maxelement<<endl;
        }   
    }
    return 0;
}


