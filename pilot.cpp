#include <iostream>
using namespace std;

int main(){

    double height;
    bool land = true;
    string decision;

    do
    {
        cout << "Enter flight height : \n";
        cin >> height;

        if(height >= 10000){
        cout << "The pilot is going around...\n";
        }else if (height>=2000 && height<=5000)
        {
            cout << "Pilot is opening gears of tyres\n";
        }
        else if (height>=1000 && height<2000)
        {
            cout << "Flaps opening...\n";
        }
        else if (height<1000)
        {
            cout << "Landing the plane...Applying reverse thrust.\n";
        }

        cout << "\nWould you like to tell altitude again? (Y/N)\n";
        cin >> decision;

        if(decision=="Y" || decision=="y")
        {
            land=true;
        }
        else{
            land=false;
            cout << "Thank you for checking out this program.";
            break;
        }
        
    } while (land == true);

    return 0;
}