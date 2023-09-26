#include<iostream>
using namespace std;
void dis(int amount, string day);
main(){
	string day;
	int amount;
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> amount;
	dis(amount, day);

}
	void dis(int amount, string day){
	float t = 0 ;

	if(day == "Sunday"){
	t = amount * 0.10; 
	}
	float a = amount - t ;
	cout << "Payable Amount: $" << a ;

}