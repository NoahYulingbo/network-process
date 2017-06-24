#include<stdarg.h>
#include<stdio.h>

int add(int count, int a,int b,...)
{
    int c=a+b;
    va_list ap;

    va_start(ap,b);//b 是第一个可变参数前面一个参数

    int i;
    for(i=0;i<count;++i)
    {   //用ap 返回可变的参数，并且复制给arg，
        //第二个参数，是你要返回的参数的类型
        int arg=va_arg(ap,int);
         c+=arg;
    }
//可变参数的第三步， 用va_end 宏结束可变参数的获取
    va_end(ap);
    return c;
}
int main()
{
    int c=add(3,2,3,4,5,1);
    printf("c=%d",c);
    printf("c=%d\n",c);

}
