#include <iostream>
using namespace std;
void add(int number1, int number2);
void subtract(int number1, int number2);
void multiply(int number1, int number2);
void division(int number1, int number2);


main(){
while(true){
int number1;
int number2;
char symbol;

cout << "Enter 1st number: ";
cin >> number1;
cout << "Enter 2nd number: ";
cin >> number2;
cout << "Enter symbol(+,-,*,/): ";
cin >> symbol;

add(number1, number2);
}

void add(number1, number2){
if(symbol == '+'){
cout << number1 + number2 << endl;
}
}
void subtract(number1, number2){
if(symbol == '-'){
cout << number1 - number2 << endl;

}
}
void multiply(number1, number2){
if(symbol == '*'){
cout << number1 * number2 << endl;

}
}

void division(number1, number2){
if(symbol == '/'){
cout << number1 / number2 << endl;
}
}
}

