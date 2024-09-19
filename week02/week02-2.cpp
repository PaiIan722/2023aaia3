//week02-2.cpp
//SOIT107_ADVANCE_006
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c!='2') cout << c;
	}
	cout <<"\n";
}