// 4.02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	struct point
	{
		int x, y;
	};

	point p1, p2, p3;
	cout << "input p1 ";
	cin >> p1.x >> p1.y;
	cout << "input p2 ";
	cin >> p2.x >> p2.y;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	cout << "p3 = "<<p3.x << " " << p3.y<<endl;

	system("pause");
    return 0;
}

