#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*//3.1变量的定义和初始化
int main() 
{
	int ago = 21;
	float pi = 3.14;
	char ch = 'v';
}*/


//3.2局部变量和全局变量
/*int main()
{
	//局部变量：将局部变量定义在函数体内，函数调用结束后，局部变量就会被销毁。
	int num1 = 10;
	printf("num1 = %d\n", num1);
	return 0;
}*/

/*//全局变量：将全局变量定义在函数体外，函数调用结束后，全局变量不会被销毁。
int num2 = 20;
int main()
{
	printf("num2 = %d\n", num2);
	return 0;
}*/

/*//如果同时出现局部变量和全局变量，局部变量会覆盖全局变量。
int num1 = 20;
int main()
{
	int num1 = 10;
	printf("num1 = %d\n", num1);
	return 0;
}*/


//3.3 变量的使用
//变量的使用：变量在定义后可以被使用，使用变量时需要注意变量的类型和范围。
//scanf:输入语句，将用户输入的值赋给变量。
//printf:输出语句，将变量的值输出到屏幕上。

//整形计算：输入两个整数，计算它们的和
/*int main()
{
	//初始化变量
	int num1 = 0;
	int num2 = 0;
	//将两个值输入进去
	scanf("%d %d", &num1, &num2);
	//计算两个值的和
	int sum = num1 + num2;
	//输出结果
	printf("sum = %d\n",sum);
	return 0;
}*/


//3.4 作用域和生命周期
//作用域：变量的作用范围，局部变量的作用域在函数体内，全局变量的作用域在整个文件内。
//生命周期：变量的存在时间，局部变量的生命周期在函数调用结束后结束，全局变量的生命周期在程序运行期间一直存在。

/*int num2 = 20;//全局变量：作用于在整个文件内，生命周期在程序运行期间一直存在。
int main()
{
	int num1 = 10;//局部变量：作用于在函数体内，生命周期在函数调用结束后结束。
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	return 0;
}*/


//3.5 常量：
	//常量：在程序运行期间值不能改变的量。
	//常量分为四种：字面常量、#define标识符常量、const修饰的常变量和枚举常量。
	
//字面常量：直接写在程序中的值，如整数、浮点数、字符、字符串等。
//int main()
//{
//	23;
//	45;
//	97;
//	'w';
//	"satori kawaii";
//	return 0;
//}
//一般来说，字面常量的类型是由编译器根据其值自动推断的
//const修饰的常变量：使用const关键字修饰的变量，其值在程序运行期间不能改变。
//为何为常变量：它的本质是一个变量，只是它的值被const所修饰暂时无法改变，所以称为常变量。

/*int main()
{
	const float pi = 3.14f;
	pi = 3.14159f; //err，因为pi被const所修饰变成常量，其值不能改变。
	return 0;
}*/

//#define标识符常量：使用#define关键字定义的常量，其值在程序运行期间不能改变。
//写外面写里面都可
/*#define min 30
int main()
{

	printf("min = %d\n", min);
	return 0;
}*/

//枚举常量：使用enum关键字定义的常量，其值在程序运行期间不能改变。
//枚举常量的定义格式为：
//enum 枚举类型名 {枚举常量1, 枚举常量2, ...};
//枚举常量的值从0开始，依次递增，如果需要指定某个枚举常量的值，可以在定义时指定。
//枚举常量的值可以是整数类型，也可以是字符类型，但不能是浮点类型。
//主要作用：枚举常量主要用于表示一组相关的常量，便于程序的阅读和维护。
enum color {
	black, red, green, blue
};

int main()
{
	printf("%d\n",black);
	printf("%d\n", red);
	printf("%d\n", green);
	printf("%d\n", blue);
	return 0;
}