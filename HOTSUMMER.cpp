#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int a;
		int sum = 0;
		cin >> a;

		for (int i = 0; i < 9; i++)
		{
			int b;
			cin >> b;
			sum += b;
		}
		if (a < sum)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
