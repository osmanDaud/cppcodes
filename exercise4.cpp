#include <iostream>
using namespace std;
    int main(){
        int number;
        cout << "Enter an integer between 5 an 10: "<< endl;

        while (!(cin >> number)) { // if the user input cant be assigned to the int data type do the following

            cout << "Sorry you have entered an invalid number, try again" <<endl;
                cin.clear(); //removing the last enterded user-input
                cin.ignore(100, '\n'); //i want to ignore the last 100 entered digits before the nextline

        }

        while (number > 10 || number < 5){
            cout << "you entered "<<number<<". please Enter a number between 5 and 10: "<<endl;
            cin.clear();
            cin.ignore(100, '\n');
           cin >> number;
         }


        cout << "your input ("<<number<<") has been accepted";
        return 0;
    }