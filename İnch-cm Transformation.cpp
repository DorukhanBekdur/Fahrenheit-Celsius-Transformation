#include <iostream>
using namespace std;
int main()
{
	const double ratio = 2.54;
	double i,cm;
	cout << "Inch: ";
	cin >> i;
	cm = ratio*i;
	cout <<"cm= "<<cm;
	return 0; 
}
