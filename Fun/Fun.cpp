// Fun.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "Common\Convert.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string source = "ABC";
	cout << "transform" << endl;
	string dest = Convert::base64_encode(source.c_str(), source.length());
	cout << dest << endl;
	cout << "re transform" << endl;
	string dest2 = Convert::base64_decode(dest);
	cout << dest2 << endl;
	system("pause");
	return 0;
}

