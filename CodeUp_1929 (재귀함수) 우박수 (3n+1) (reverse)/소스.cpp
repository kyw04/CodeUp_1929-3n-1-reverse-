#include <iostream>
using namespace std;

void f(int n)
{
	if (n == 1);
	else if (n % 2)
		f(n * 3 + 1);
	else
		f(n / 2);
	cout << n << endl;
}
int main()
{
	int n;
	cin >> n;
	f(n);
	return 0;
}