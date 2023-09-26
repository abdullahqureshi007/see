#include<iostream>
using namespace std;
void cube(int i);
main(){
	int i;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> i ;
	cube(i);

}
	void cube(int i){

	int a = ( i * i ) * 6;
	cout << "Number of stickers needed: " << a ;

}