#include <string>
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int pos;
		string str;
		cin >> pos;
		cin >> str;

		cout << (i + 1) << " " << str.erase(pos - 1, 1) << endl;
	}
}