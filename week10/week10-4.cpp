#include <iostream>
#include <string>
using namespace std;

class Cat{
public: /// �O�o�n�[ public �~��Q�~���ݨ�
    string name;
    Cat(string _name){ /// ����غc�l cinstructor (����S��void)
        name = _name;
    } /// �S�� return ��
    void print(){
        cout << "My name is " << name << ".\n";
    }
};
int main()
{/// �إX cat1 �M cat2 �ɡA�|�Ϋغc�l�A�⪫�� �غc�X��
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}
