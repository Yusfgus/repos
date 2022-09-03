#include<iostream>
using namespace std;


int main()
{
	long long  t, n, ctr;
	cin >> t;
	while (t--)
	{
		cin >> n;
		
		ctr = (n / 3) * 2 + (n / 2) * 2 + n;

		cout << ctr << endl;
	}

	return 0;
} 