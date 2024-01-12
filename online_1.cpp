#include<iostream>
using namespace std;
// int i=5;
// int main(){
// for (i=0;i<5;i++){
//     cout<<i<<endl;
// }
// return 0;
// }

// int main()
// {
//   for (int n=10; n>0; n--)
//    {
//       cout << n << ", ";
//    }
//    cout << "FIRE!";
//    return 0;
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number>";
//     cin>>n;
//     while(n>=0){
//    cout<<n<<",";
//     --n;
//     }
//     cout<<"FINISH!";
//         return 0;
// }


// int main()
// {
//     int n;

//     do{
//         cout<<"enter number(0 to 100):";
//         cin>>n;
//         cout<<"you enetered"<<n<<"\n";
//     }while(n!=0);
//     return 0;
// }


//  int main()

// {

// int a = 50;

// int b = 2;

// int c;

// if(a && b)
// {
// cout<<"1-Condition is true"<< endl;

// }

// if (a||b)

// {

// cout <<" prime prime 2 -Condition is true"<< endl;

// }

// /* After changing the values of a and b variable */

// a = 4;

// b = 60;

// if (a \&\&b)

// {

// cout <<"prime prime 3 -Condition is true"<< endl;

// }else

// cout <<" prime prime 4 -Condition is not" true<< endl;
    
// return 0;
// }
// int main()

// {

// int a = 50;

// int b = 2;

// int c;

// if(a && b)
// {
// cout<<"1-Condition is true"<<endl;

// }

// if (a||b)

// {

// cout <<"prime prime 2 -Condition is true"<< endl;

// }

// /* After changing the values of a and b variable */

// a = 4;

// b = 60;

// if (a&&b)

// {

// cout <<" prime prime 3 -Condition is true"<< endl;

// }else

// cout <<" prime prime 4 -Condition is not true"<< endl;
// return 0;
// }
class Demo
{
private:
int data; 
public:
void setdata(int d) 
{
data = d;
}
void showdata() 
{
cout << "Data is"<<data << endl; }
};
int main()
{
Demo s1, s2; 
 s1.setdata(10);
 s2.setdata(15);
 s1.showdata();
 s2.showdata();

return 0;
}