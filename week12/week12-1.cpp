/// struct vs.class
#include <iostream>
#include <string> /// 為了貓的名字
using namespace std;

/// struct Node(); /// 都有分號結尾，C語言的結構
/// class Cat(); /// 之前幾週，都教過，C++更強大

struct Node{
    int val; /// value 縮寫，這個Node裡面的值
};
class Cat{
public:
    string name; /// 貓的名字，之前幾週教過
};
int main()
{
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
