//week06-2c.cpp vector array step05 step06
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int>a; //step03 vector array
	int now;
	while(cin>>now){ //step01 input
		a.push_back(now); //step03 vector array
		
		sort(a.begin(),a.end()); //step05 sort
		
		int N= a.size();//step06
		if(N%2==1) cout<<a[N/2]<<"\n";//step06
		else cout<<(a[N/2-1]+a[N/2])/2 <<"\n";//step06
		//for(int b:a) cout<<b<<' ';
		//cout<<"\n"; //step04 print array
		//cout<<now<<"\n"; //step02 output
	}
}