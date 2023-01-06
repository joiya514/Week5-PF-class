#include <iostream>
using namespace std;
void iseligible(int age);
main (){
while(true){
int age;
cout << "What is your age: ";
cin >> age;
iseligible(age);
}
}
void iseligible(int age){
if(age >= 18){

cout << "You are eligible to vote." << endl;


}

if(age < 18){

cout << "You are not eligible to vote." << endl;
}
}
