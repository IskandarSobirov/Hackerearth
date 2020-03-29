#include <iostream>

using namespace std;

int main()
{
	unsigned long tests;

	cin >> tests;

	while (tests--)
	{
		unsigned long long n, c; 
		

		cin >> c >> n;

    	unsigned long long sub =(n*(n+1))/2; 
		if(c < sub) 
			cout << c << endl;
		else 
		cout << c % n << endl;
  }

	return 0;
}