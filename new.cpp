#include <iostream>
using namespace std;
void markss(string name, int marks, int aggregate){
cout << "Your name is: " << name << endl;
cout << "Your marks are: " << marks << endl;
cout << "Your aggregate is: " << aggregate << endl;

} 
main(){
string name;
int marks;
int aggregate;
cout << "Enter your name: ";
cin >> name;
cout << "Enter you marks: ";
cin >> marks;
cout << "Enter you aggregate";
cin >> aggregate;
markss(name, marks, aggregate);

}



