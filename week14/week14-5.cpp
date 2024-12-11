// week14-5.cpp 
#include <iostream>
using namespace std;
int main()
{
	int a,b; // step01: Input
	while( cin >> a >> b ){
		int bad=0,backup=a; // Step04: backup
		if(b==1){
			cout << "Boring!\n";
			continue; // Step06
		}
		while(a>0){ // Step03: Testing bad
			// cout << a << " ";
			if(a!=1 && a%b > 0) bad=1;
			a=a/b;
		}
		if(bad==1) cout << "Boring!\n";
		else{
			a=backup; // Step04: backup
			while(a>1){
				cout << a << " ";
				a/=b;
			} 
			cout << "1\n"; // Step05
		}
	} // step02: Output
}