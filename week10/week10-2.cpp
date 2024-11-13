///week10-2.cpp 練習class
/// class 的大括號後面要加分號
///輸入class Cat 再加大括號 CodeBlocks 它幫你家好下括號、分號

#include <iostream>
using namespace std;

class Mouse{
public:
    void print(){
        cout << "I am a mouse, 吱吱\n";
    }
};

class Cat{ ///自己打跳行
public:
    void print(){
        cout << "I am a cat, meow meow\n";
    }
};
int main()
{
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
