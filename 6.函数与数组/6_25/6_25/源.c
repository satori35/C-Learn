#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//函数的定义：将几个自变量经过函数的处理后得到因变量
//函数的声明：告诉编译器函数的名称、参数类型和返回值类型
//函数可以在main函数前定义也可在main函数后定义

//在之前写了一个两数相加等于和的函数
/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个整数值\n");
	scanf("%d %d" , &num1 ,&num2);
	sum = num1 + num2;
	printf("sum=%d\n",sum);
	return 0;
}*/

//如果利用函数写，则会更加简洁，而且可以重复使用

/*int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个整数值\n");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2); //调用函数
	printf("sum=%d\n", sum);
	return 0;
}*/

//数组
//数组是相同类型数据的集合，数组中的每个数据称为元素，可最多放10个元素，数组的每个元素都有一个编号，称为下标，下标从0开始

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //定义一个数组，数组中有10个元素，每个元素都是int类型
	for (i = 0; i < 10; i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;
}