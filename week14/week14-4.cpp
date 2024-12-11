// week14-4.cpp not OK
#include <iostream>
using namespace std;
int main()
{
	int a,b; // step01: Input
	while( cin >> a >> b ){
		while(a>0){ // Step03:Testing
			cout << a << " ";
			a=a/b;
		}
		cout << "Boring!\n";
	} // step02: Output
}