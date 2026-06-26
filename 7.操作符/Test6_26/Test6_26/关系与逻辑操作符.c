#define _CRT_SECURE_NO_WARNINGS
//关系运算符：<小于 <=小于等于 ==等于（=为赋值） >大于 >=大于等于 !=不等于
#include <stdio.h>

/*int main()
{
	int num = 0;
	while (num <= 5) {
		printf("我是第%d个\n",num);
		num++;
	}
	return 0;
}*/

//逻辑运算符：与&& 或||
//与（且）:全真则真，有假则假
//或：有真为真，全假则假
//所谓代码，也就是解决现实生活中的问题，与的意思就是说假如张三和李四搬东西，李四没来张三搬不动；而或的意思就是东西没那么重张三一个人就能轻松应对，这就是与或关系
//已知C语言中，0表假，非0表真
/*int main()
{
	int a = 10;
	int b = 20;
	if (a || b)
		printf("通过\n");
	return 0;
}*/

//条件操作符
//格式为 exp1 ？ exp2 : exp3

/*int main()
{
	int a = 10;
	int b = 20;
	int c = a > b ? a : b;//这个操作符会输出满足条件的数值，如果条件为假的话则去找满足条件的值输出
	printf("c = %d\n" , c);
	return 0;
}*/

//逗号表达式：用逗号隔开的表达式
//逗号表达式的作用是可以隔开从前往后计算

/*int main()
{
	int a = 10;
	int b = 20;
	int c = (a = a + b, b = a + 1 , a + b);//输出最后的值，61
	
	printf("c = %d\n", c);
	return 0;
}*/

//下标引用操作符[]
//利用下标定位数组的元素
/*int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//这里并不是操作符，而是数组写法的标准形式
	int i = 4;
	arr[i] = 20;//这里的方括号是下标引用操作符，主要在于它用于定位数组里面的元素并替换
	printf("%d\n",arr[i]);
	return 0;
}*/

//函数调用操作符
int Add(int x, int y) {
	int z = x + y;
	return z;
}

int main()
{
	int sum = Add(2 , 3);//这里的括号就是函数调用操作符
	printf("sum = %d\n", sum);
	return 0;
}