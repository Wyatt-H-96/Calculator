#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //define variables
    string operation;
double number1, number2;
//take user input
cout <<"Enter a number: ";
cin >> number1;
cout <<"Enter operation (+, -, *, /): ";
cin >> operation;
cout <<"Enter seccond number: ";
cin >> number2;

//create if else statement
if (operation == "+"){
    cout << number1 + number2;
} else if (operation == "-"){
    cout << number1 - number2;
} else if (operation == "*"){
    cout << number1 * number2;
} else if (operation == "/"){
    cout << number1 / number2;
 }
  else{
    cout << "not a recognized operation";
    }

    
    return 0;
}