// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"hello rowdies";
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//      const int m=15;
//          m=10;                  //error due to const
//     cout<<m;

// }


// #include <iostream>
// using namespace std;
// int main(){
//     string firstname;
//     string lastname;
//     cout<<"Enter a first name=";
//     cin>>firstname;
//     cout<<"Enter a lastname name=";
//     cin>>lastname;
//     cout<<"Name is="<<firstname.append(lastname);
// }


// #include <iostream>
// using namespace std;

// int main() {
//   int myNumbers[5];
//   cout<<"Enter numbers";
//   cin>>myNumbers[5];
//   for (int i : myNumbers) {
//     cout << i << "\n";
//   }
//   return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   struct {
//     int myNum;
//     string myString;
//   } myStructure;
//     cout<<"Enter a number= ";   //struct
//     cin>>myStructure.myNum;
//   cout<<"Enter a string=";
//   cin>>myStructure.myString;

//   cout << myStructure.myNum << "\n";
//   cout << myStructure.myString << "\n";
//   return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string food = "Pizza";

//   cout << &food;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string name;
//     cout<<"Enter a name-";
//     cin>>name;
//     int count;
//     cout<<"Enter a count number ";
//     cin>>count;
//     for(int i =0;i<count;i++){
//         cout<<name<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void myfunction(){
//     cout<<"HELLO FUNCTION CALLED SUCESSFULLY";
// }
// int main(){
//     myfunction();
// }

// #include <iostream>
// using namespace std;

// int sum(int a,int b){
//     int sum =a+b;
//     cout<<"Answer="<<sum<<endl;
//     return sum;
// }
// int main(){
//     int x,y;
//     cout<<"enter a number ";
//     cin>>x;
//     cout<<"enter a second number ";
//     cin>>y;
//     sum(x,y);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int rollnos;
//     int marks;
// };
// int main(){
//     Student s1,s2;
//     s1.name="aayush";
//     s1.rollnos=12;
//     s1.marks=15;
//     cout<<s1.name<<endl;
//     cout<<s1.rollnos<<endl;
//     cout<<s1.marks<<endl;

//     s2.name="ash";
//     s2.rollnos=2;
//     s2.marks=150;
//     cout<<s2.name<<endl;
//     cout<<s2.rollnos<<endl;
//     cout<<s2.marks<<endl;

// }