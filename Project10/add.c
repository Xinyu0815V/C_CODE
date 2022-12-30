#define _CRT_SECURE_NO_WARNINGS 1
static int g_val = 2022;
//statia修饰全局变量，使得全局变量只能在自己所在的源文件（.c）文件内部可以使用，其它源文件不能使用。
// 全局变量具有外部链接属性。
//被static修饰之后，就变成了内部链接属性，其它源文件就不能链接到这个静态的全局变量了。
static int add(int x, int y) //函数被static修饰，使得函数只能在函数所在的源文件内部使用，不能在其它源文件内部使用。
{
	return x + y;
}
//static 将函数的外部链接属性变成了内部链接属性。
