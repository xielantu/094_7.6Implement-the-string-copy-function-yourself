// 094_7.6自己实现字符串拷贝函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <string.h>

char* myStrcpy(char* des, char* src)
{
	if (des == NULL || src == NULL)	return NULL;
	char* bak = des;
	while (*src!='\0')
	{
		*des = *src;
		des++;
		src++;
	}
	*des = '\0';
}

char* myStrcpy2(char* des, char* src)
{
	if (des == NULL || src == NULL)	return	NULL;
	char* bak = des;
	while (*src != '\0')
	{
		*des++ = *src++;
	}
	*des = '\0';
	return bak;
}

char* myStrcpy3(char* des, char* src)
{
	if (des == NULL || src == NULL)	return	NULL;
	char* bak = des;
	while ((*des++ = *src++) != '\0');//逻辑运算，如果是满足条件，返回真True
	*des = '\0';
	return bak;
}

char* myStrncpy(char* des, char* src, int count)
{
	if (des == NULL || src == NULL)	return	NULL;
	char* bak = des;
	while (*src != '\0'&&count>0)
	{
		*des++ = *src++;
		count--;
	}

	if (count > 0)//源码里面加了这一个if条件判断
	{
		while (count > 0)
		{
			count--;
			*des++= '\0';
		}
		return des;
	}

	*des = '\0';
	return bak;
}


int main()
{
	char str[128] = { '\0' };
	char* p = (char*)"chenlichen handsome";
	myStrcpy(str, p);
	puts(str);
	myStrcpy2(str, p);
	puts(str);//puts();自动打印换行
	myStrcpy3(str, p);
	puts(str);
	myStrncpy(str, p, 4);
	puts(str);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
