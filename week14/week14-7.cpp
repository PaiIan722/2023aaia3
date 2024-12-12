//week14-7.cpp UVA10190 not OK
#include <iostream>
using namespace std;
int main(){
	int a,b;//Step01:Input
	while(cin >> a >> b){
		if(b==1){ //Step06:special case
			cout << "Boring!\n";
			continue;
		}
		int bad = 0,backup = a; //Step05:backup
		while(a>1){//Step03:BOPiFa	
			if(a%b>0) bad = 1;//Step04:bad
			a = a / b;
		}
		if(bad==1) cout << "Boring!\n";
		else {
			a = backup;//Step05:backup
			while(a>1){ //Step03:BoPiFa
				cout << a << " ";
				a = a / b;
			}
			cout << "1\n";
		}
	}//Step02:Output
}