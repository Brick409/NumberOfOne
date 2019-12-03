// NumberOfOne.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

/* count函数计算数字v 中包含1的个数，并返回1的个数 */
/* 以下函数时间复杂度为O（m），其中m为数字中包含1的个数 */
int count(int v)
{
    int num = 0;
    while (v)
    {
        v = v&(v - 1);
        num++;
    }
    return num;
}


int _tmain(int argc, _TCHAR* argv[])
{
    int i = 15;
    cout << count(i) << endl;

    system("pause");
	return 0;
}

