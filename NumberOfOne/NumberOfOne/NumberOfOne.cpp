// NumberOfOne.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

/* count������������v �а���1�ĸ�����������1�ĸ��� */
/* ���º���ʱ�临�Ӷ�ΪO��m��������mΪ�����а���1�ĸ��� */
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

