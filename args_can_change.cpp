// C������ϰ
// ʹ��VS2019���п�����IDEȷʵ�ȽϷ���(����������Ҳ���ñ�дMakefile������Makefile�������רҵ��д�����б�Ҫ����ѧϰ)
// �ļ���ʽ������Ϊ.cpp���������¼���.c

#include <stdio.h>
#include <stdarg.h>

int average(int num, ...); // ��ƽ��ֵ����ϰһ�¿ɱ������д��

int main(void)
{
	printf("����һ���������ȿɱ亯���Ĳ��Գ���\n");
	printf("�õ���ƽ��ֵΪ��%d", average(4, 65, 66, 64,60));

	return 0;
}

// �ɱ����������ͨ��stdarg.h�����׼���е�va_list���ͣ�va_start��va_args��va_end�������꺯��ʵ�ֵ�
// �о����Ǻ�����
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
