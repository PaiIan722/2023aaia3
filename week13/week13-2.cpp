//week13-2.cpp UVA10035  ok
#include <iostream>
using namespace std;
int helper(int a,int b){//Step03:function
	int ans = 0,carry=0;
	while(a>0 || b>0){
		int now = a%10 + b%10 + carry;
		carry = now / 10;
		ans += carry;
		a /= 10;
		b /= 10;
	}
	return ans;
}
int main(){
	int a,b;
	while(cin>>a>>b){ //Step01:Input
		if(a==0 && b==0) break;
		
		int ans=helper(a,b);//Step03:function
		if(ans==0) cout<<"No carry operation.\n";
		else if(ans==1) cout<<"1 carry operation.\n";
		else cout<<ans<<" carry operations.\n";
	}//Step02:Output
}