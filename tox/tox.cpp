// tox.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#define CMAX 8
using namespace std;


int main()
{
	char t[CMAX];
	int a;
	cin >> a;
	itoa(a, t, 16);
	cout << t << endl;
	system("pause");

    return 0;
}

