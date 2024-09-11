// C++ 的版本

# include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b=a/50;
    int c=a%50/5;
    int d=a%5/1;
    cout << a << "=50*" << b << "+5*" << c << "+1*" << d << endl;
}