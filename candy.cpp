#include <iostream>

using namespace std;

int main()
{
	unsigned long tests;

	cin >> tests;

	while (tests--)
	{
		unsigned long long n, c, e;
		bool ans = false;

		cin >> n >> c;

		e = (n * (n + 1)) / 2;

		if (c >= e)
		{
			unsigned long long next = n * n;

			if (n % 2 == 0 && c >= next)
			{
				ans = ((c - next) % (n / 2) == 0);
			}
			else
			{
				ans = (((c % e) % n) == 0);
			}
		}

		cout << (ans ? 1 : c) << endl;
	}

	return 0;
}