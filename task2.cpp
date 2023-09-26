#include<iostream>
using namespace std;
void feet(float i);
main(){
	float i;
	cout << "Enter the measurement in inches: ";
	cin >> i; 
	feet(i);
}
		
 void feet(float i){
	float f = i / 12 ;
	cout << "Equivalent in feet: " << f ;


}	