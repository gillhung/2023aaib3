///�Ҹ��D�ءA ���L�k����
/// �]��range_based for �j��A�����b C++11(2011��)�~���
/// �p�G�A��C++98(1998�~��C++)�|�L�k���`�sĶ�B����|�X���B�j��X����
/// codeblock 17.12 �� setting-Compiler �Ĳ�2�� -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c!='2') cout << c ;
	}
	cout << endl;
	return 0;
}
