///考試題目， 但無法執行
/// 因為range_based for 迴圈，必須在 C++11(2011後)才能用
/// 如果適用C++98(1998年版C++)會無法正常編譯、執行會出錯、迴圈出不來
/// codeblock 17.12 裡 setting-Compiler 勾第2個 -std=c++11
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
