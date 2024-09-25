int main()
{
	vector<int> a;
	int now;
	while(1){ // you can write(true)
		cin >> now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans=0;
	for(int num : a){
		if(num==now) ans++;
	}
	cout << ans << endl;
}