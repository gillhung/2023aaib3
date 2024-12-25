#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int T,N; // step01:Input
	cin >> T;
	for(int t=0;t<T;t++){
		cin >> N; // step01:Input
		vector<int> a(N);
		for(int i=0;i<N;i++){
			cin >> a[i]; // step01:Input
			cout << a[i] << " "; // delete latter
		}
		cout << endl; // delete latter
		
		cout << "Optimal train swapping takes 1 swaps.\n";
	} // step02:Output
}