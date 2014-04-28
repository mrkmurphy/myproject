#include <iostream>
using namespace std;
int squared(int n)
{
	return n * n;
}
int main()
{
	int x;
	cout << "Enter integer: ";
	cin >> x;
	cout << x << " squared is " << squared(x) << endl;
	return 0;
}
