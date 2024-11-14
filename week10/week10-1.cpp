/// week10-1.cpp 要教 類別 class
#include <iostream>
using namespace std;
///你在寫 class Cat {寫完大括號,它會幫你補完}; 再多打兩個Enter
class Cat{ ///貓的類別
public:
    void print(){
        cout<<"I am a cat. meow meow\n";
    }
};

class Mouse {
public:
    void print(){
        cout<<"I am a mouse. chi chi\n";
    }
};

int main(){ ///大寫 小寫
    Cat cat1,cat2; /// cat1 cat2 都是 Cat
    cat1.print();
    cat2.print();
    Mouse mouse1,mouse2;
    mouse1.print();
    mouse2.print();
}
