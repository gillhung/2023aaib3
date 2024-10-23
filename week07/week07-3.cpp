// week07-3.cpp
#include <iostream>
#include <vector>
#include <algorithm> // sort()
using namespace std;
int main()
{
	vector<int> a; //step2
	int now;
	while(cin >> now){ //step1
		a.push_back(now); //step3
		sort(a.begin(),a.end()); // step3
		int N = a.size(); // step4
		if(N%2==1) cout << a[N/2] << endl; // step5
		else cout << (a[N/2-1]+a[N/2])/2 << endl;
	}
}