#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//while循环语句
//while循环语句的基本形式是：while(条件表达式)语句; 如果符合所给的条件，循环则会执行；反之则跳出运行直接结束
int main()
{
	//初始化变量
	int true = 0;
	int false = 0;
	//输入变量
	//进行循环
	printf("你喜欢我吗，喜欢为1，不喜欢为0\n");
	while (scanf("%d", &true) , true == 0) {
		if (true == 1) {
			printf("我也喜欢你饱饱\n");
			true++;
		}
		else {
			printf("呜呜呜\n");
		}
	}
	//输出结果
	return 0;
}