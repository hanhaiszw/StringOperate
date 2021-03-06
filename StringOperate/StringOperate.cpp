// StringOperate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#pragma warning(disable:4996)

//字符串分割1
void test01() {
	string s = "    my     name is lmm\n\n lisi\n wangwu  ";
	char *p;
	const char *delim = " \n";  //可以处理多个空格的分隔 和 \n
	//string.h中的方法
	p = strtok((char*)s.c_str(), delim);
	while (p) {
		cout << p << endl;
		//笔试时，这句报错  
		p = strtok(NULL, delim);
	}
}

//字符串分割2
void test02() {
	string str= "my  name is lmm";
	stringstream ss(str);
	string sub_str;
	while (getline(ss, sub_str, ' ')) { //注意后面不能是字符串，只能是字符，只能处理一个空格的分割
		cout << sub_str << endl;
	}
}

int main()
{
	test01();
	//test02();

	system("pause");
    return 0;
}

