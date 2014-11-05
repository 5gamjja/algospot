#include <string>
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	while (num--)
	{
		string str;
		string temp1;
		string temp2;
		cin >> str;

		if (str.size() > 2)
		{
			for (int i = 0; i < str.size(); i++)
			{
				if (i % 2 == 0)
				{
					temp1.insert(temp1.size(), 1, str[i]);

				}
				else
				{
					temp2.insert(temp2.size(), 1, str[i]);
				}
			}
			temp1.append(temp2);
			str = temp1;
		}
		cout << str << endl;
	}
}