#include "main.h"
int printint(int);
int main()
{
	int test = -65758;
	int test2 = 65799;
	int test1 = 7;
	int ret, ret2, ret3;

	ret = printint(test);
	ret2 = printint(test2);
	ret3 = printint(test1);

	return (ret + ret2 + ret3);
}
