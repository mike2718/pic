// C语言中的基本转换
#include <stdio.h>

int main(void)
{
	float f1 = 123.125, f2;
	int i1, i2 = -150;
	char c = 'a';

	i1 = f1;  // 浮点数转换为整数
	printf("%f assigned to an int produces %i\n", f1, i1);

	f1 = i2;  // 整数转换为浮点数
	printf("%i assigned to a float produces %f\n", i2, f1);

	f1 = i2 / 100;  //整数除以整数
	printf("%i divided by 100 produces %f\n", i2, f2);
	// 输出：-150 divided by 100 produces 0.000000（?）

	f2 = i2 / 100.0;  // 整数除以浮点数
	printf("%i divided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2 / 100;  // 类型转换运算符
	printf("(float) %i divided by 100 produces %f\n", i2, f2);

	return 0;
}
