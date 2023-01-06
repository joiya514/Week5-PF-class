#include <iostream>
using namespace std;
void calculateBill(string day, int price);
main(){
while(true){
string day;
int price;
cout << "Enter day: ";
cin >> day;
cout << "Enter price: ";
cin >> price;
calculateBill(day, price);
}

}
void calculateBill(string day, int price){
float discount;
float total;
if(day == "sunday"){
discount = 0.1*price;
total = price - discount;
cout << "price is: " << total << endl;
}
if(day != "sunday"){
discount = 0.05 * price;
total = price - discount;
cout << "price is: " << total << endl;

}
}

