// C语言练习
// 使用VS2019进行开发，IDE确实比较方便(不用配插件，也不用编写Makefile。不过Makefile才是相对专业的写法，有必要进行学习)
// 文件格式都设置为.cpp，可以向下兼容.c

#include <stdio.h>
#include <stdarg.h>

int average(int num, ...); // 求平均值，练习一下可变参数的写法

int main(void)
{
	printf("这是一个参数长度可变函数的测试程序\n");
	printf("得到的平均值为：%d", average(4, 65, 66, 64,60));

	return 0;
}

// 可变参数个数的通过stdarg.h这个标准库中的va_list类型，va_start、va_args、va_end这三个宏函数实现的
// 感觉还是很神奇
int average(int num, ...)
{
	int i;
	int result = 0;
	va_list v_arg;

	va_start(v_arg, num);
	for (i=0; i<num; i++)
	{
		result += va_arg(v_arg, int);
	}
	va_end(v_arg);

	return (result / num);
}
