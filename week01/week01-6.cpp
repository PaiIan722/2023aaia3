///week01-6.cpp ­n½Æ²ß°j°é¡B­Ë¹L¨Óªº°j°é¡B°}¦C
#include <iostream>
using namespace std;
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
        cout << a[i];
    }
    cout << "\n";
    for(int i=10-1;i>=0;i--){
        cout << a[i];
    }
}
