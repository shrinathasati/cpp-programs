#include<stdio.h>

void fun()
{
	auto int a=10;
	static int b=20;
	printf("%d",a,b);
	a++;
	b++;
	
}int main()
{
	fun();
	fun();
	fun();

}
