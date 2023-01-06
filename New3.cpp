#include <iostream>
using namespace std;
void result(int marks){
cout << "your result status: ";


}
main(){

int marks;
cout << "Enter your marks: ";
cin >> marks;
  if(marks >= 50){
cout << "Passed ";
}
   if (marks < 50){
cout << "failed ";
}
result(marks);


}