#include <iostream>
using namespace std;

class Student{
    private:
    string name_1;

    public:
    void setdata ( string n){
    name_1=n;
    }
    void displaydata(){
        cout<<name_1<<endl;
        return;
    }
    
};
int main(){
    Student s1,s2,s3,s4;
    s1.setdata("aayush");
    s2.setdata("sahil");
    s3.setdata("prem");
    s4.setdata("ayush aryan");
    
    s1.displaydata();
    s2.displaydata();
    s3.displaydata();
    s4.displaydata();

    return 0;
}



