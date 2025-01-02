// week17-3b.cpp
#include <iostream>
using namespace std;
int main(){
	int a[7]={};
	char c;
	while(cin>>c){
		a[c-'0']++;
	}
	for(int i=1;i<=6;i++){
		cout << i << ':' << a[i] <<"\n";
	}
}