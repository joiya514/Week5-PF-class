#include <iostream>
using namespace std;
void great(int number1, int number2);
main(){
while(true){
int number1;
int number2;
cout << "Enter 1st number: ";
cin >> number1;
cout << "Enter 2nd number: ";
cin >> number2;
great(number1,number2);

}

}
void great(int number1, int number2){
if(number1 > number2){
cout << number1 << " is greater" << endl;
}

if(number1 < number2){
cout << number2 << " is greater" << endl;
}
}
