/// week06-1.cpp STL vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; /// ���Y�ۦp�A�i�ܪ��ת��}�C�A�W�n��
    a.push_back(30);
    a.push_back(20);
    a.push_back(10);
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
    }

    sort(a.begin(),a.end()); /// �p��j�Ƨ�
    for(int i=0;i<3;i++){
        cout << a[i] << " ";
    }

}
