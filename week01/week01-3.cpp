//week01-3.cpp SOIT106_Base_002
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	cout << n;
	cout << "=50*";
	cout << n/50;
	cout << "+5*";
	cout << n%50/5;
	cout << "+1*";
	cout << n%5;
	cout << "\n";
	
}