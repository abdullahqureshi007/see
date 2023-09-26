#include<iostream>
using namespace std;
void evenodd(int num);
main(){

	int num;
	cout << "Enter a number: ";
	cin >> num;
	evenodd(num);

}

	void evenodd(int num){

	int a = num % 2;
 
	if(a == 0){
	cout << "Number " << num << " is even"; 
	}


	if(a != 0){
	cout << "Number " << num << " is odd";
	}

}