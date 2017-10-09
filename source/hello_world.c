#include <stdio.h>
/**
* 测试的C文件
*/




/**
*
*/
#define TEST_PARAM  66
/**
*test 结构体
*/
typedef struct 
{
	int a;
}ssl;

/**b is the test param*/
ssl b;  





/**

       * a normal member taking two arguments and returning an integer value.

       * @param a an integer argument.

       * @param s a constant character pointer.

       * @see Test()

       * @see ~Test()

       * @see testMeToo()

       * @see publicVar()

       * @return The test results

       */
int func(int a,int s)
{
	printf("%d %d",a,s);
}


int main(void)
{
	printf("hello world!!!");
}
