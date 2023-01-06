#include <iostream>
using namespace std;
int num1, num2, result;
void addition();
main(){
    cout << "Enter 1st number1: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
addition();

}
void addition(){
 result = num1 + num2;
cout << "sum is: " << result;
}