#include <string>
#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

enum Unit{
	kg,
	lb,
	l,
	g
};
static std::map<std::string, Unit> unit;

int main()
{

	unit["kg"] = kg;
	unit["lb"] = lb;
	unit["l"] = l;
	unit["g"] = g;

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		double a = 0.0;
		string str;

		cin >> a;
		cin >> str;

		switch (unit[str])
		{
		case kg:
			printf("%d %.4f lb\n", i + 1, (a * 2.2046));
			break;
		case lb:
			printf("%d %.4f kg\n", i + 1, (a * 0.4536));
			break;
		case l:
			printf("%d %.4f g\n", i + 1, (a * 0.2642));
			break;
		case g:
			printf("%d %.4f l\n", i + 1, (a * 3.7854));
			break;
		}
	}
}