#include<iostream>
using namespace std;
  void fuel(float d);
main() {
	float d ;
	cout << "Enter the distance: ";
	cin >> d;
	 fuel(d);

}
	void fuel(float d){


		if(d >= 10){
		float f = d * 10;
		cout << "Fuel needed: " << f ;
		}


		if(d < 10){
		cout << "Fuel needed: 100" ;
		}
			
}