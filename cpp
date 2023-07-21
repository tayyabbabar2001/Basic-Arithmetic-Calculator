#include <iostream>

using namespace std;

int main(){
	int x, y, sum, diff, prod, div, quo;
	cout<<"Enter first number:";
	cin >> x;
    cout << "Type another number: ";
    cin >> y;
	sum = x + y;
	diff = y - x;
	prod = y * x;
	div = y / x;
	quo = y % x;
	cout<<"The sum of X and Y is "<<sum<<endl;
	cout<<"The diff of X and Y is "<<diff<<endl;
	cout<<"The prod of X and Y is "<<prod<<endl;
	cout<<"The div of X and Y is "<<div<<endl;
	cout<<"The quo of X and Y is "<<quo<<endl;
	return 0;
}
