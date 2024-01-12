#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = b;
    b = a;
    a = temp;
}


void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 5, num2 = 10;

    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 <<endl;
 
    swapByValue(num1, num2);
     cout << "After swapping by value: num1 = " << num2 << ", num2 = " << num1 <<endl;
   
    num1 = 5;
    num2 = 10;
    
    swapByReference(num1, num2);
    cout << "After swapping by reference: num1 = " << num1 << ", num2 = " << num2 <<endl;
 
    num1 = 5;
    num2 = 10;

    swapByPointer(&num1, &num2);
    cout << "After swapping by pointer: num1 = " << num1 << ", num2 = " << num2 <<endl;

    
}
