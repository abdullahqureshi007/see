#include<iostream>
using namespace std;
void calculator( int n1, int n2, char a);
main() {
	int n1, n2 ;
	char a;
	cout << "Enter 1st number: " ;
	cin >> n1 ;
	cout << "Enter 2nd number: " ;
	cin >> n2 ;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> a;

	calculator( n1, n2, a);
}
 	void calculator( int n1, int n2, char a){
	float ans;

	if( a == '+' ){
	ans = n1 + n2 ;	
	cout << "Addition: " << ans;
	}

	if( a == '-' ){
	ans = n1 - n2  ;
	cout << "Subtraction: " << ans; 	
	}

	if( a == '*' ){
	ans = n1 * n2 ;	
	cout << "Multiplication: " << ans;
	}

	if( a == '/' ){
	ans = n1 / n2 ;	
	cout << "Division: " << ans;
	}

	
}