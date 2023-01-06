#include <iostream>
using namespace std;
void evenOdd(int number, int rmndr);
main (){
while(true){
int number;
int rmndr;
cout << "Enter a number: ";
cin >> number;
rmndr = number % 2;
evenOdd(number, rmndr);

}

}
void evenOdd(int number,int rmndr){
if(rmndr == 0){
cout << "Even number" << endl;
}
if(rmndr != 0){
cout << "Odd number" << endl;
}
}