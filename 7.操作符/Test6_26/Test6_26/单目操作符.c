#define _CRT_SECURE_NO_WARNINGS
//单目操作符：! - + & sizeof ~ -- ++ * (类型) 
#include <stdio.h>
/*int main() {
	//已知 C语言假为0 真为非0
	//将假改成真，将真改成假，则需要！取反
	int i = 1;
	
	if (!i)
	{
		printf("haha\n");
	}

	return 0;
}*/
//正负运算符
/*int main()
{
	int i = -1;
	int a = -i;
	printf("%d\n",a);
	return 0;
}*/

//sizeof 操作符类型长度
//计算空间大小

/*int main()
{
	int Add[10] = { 0 };
	printf("%d\n", sizeof(Add));//计算的是整个数组的大小，单位是字节，因为它申请了10个整形的数组，每个数组为4个字节，所以应该是40个
	return 0;
}*/

//--和++
/*int main()
{
	int a = 1;
	//int i = a++;//后自加1 i = 1,a = 2
	int i = ++a;//前自加1 i=2 a=2
	printf("a = %d，i = %d", a , i );
	return 0;
}*/

/*int main()
{
	int a = (int)1.120;//转换类型的作用就是将并非是此类型的额强行转换成此类型，多退少补。比如浮点型转换成整形会将小数点后的全部删除
	printf("a = %d\n",a);

	return 0;
}*/