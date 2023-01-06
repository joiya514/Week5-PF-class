#include <iostream>
using namespace std;
void add(int number1, int number2);
void multiply(int number1, int number2);
void divide(int number1, int number2);
void subtract(int number1, int number2);
main(){
int firstNumber;
int secondNumber;
char symbol;
cout << "Enter 1st number: ";
cin >> firstNumber;
cout << "Enter 2nd number";
cin >> secondNumber;
cout << "Enter symbol of operation: ";
cin >> symbol;
if(symbol == '+'){
add(firstNumber, secondNumber);
}
if(symbol == '*'){
multiply(firstNumber, secondNumber);
}
if(symbol == '/'){
divide(firstNumber, secondNumber);
}
if(symbol == '-'){
subtract(firstNumber, secondNumber);
}


}

void add(int number1, int number2){
int sum = number1 + number2;

cout << "Sum is: " << sum << endl;
}
void multiply(int number1, int number2){
int product = number1 * number2;
cout << "Product is: " << product;
}
void divide(int number1, int number2){
int division = number1 / number2;
cout << "Ratio is: " << division ;

}
void subtract(int number1, int number2){
int subtraction = number1 - number2;
cout << "Difference is: " << subtraction;

}
