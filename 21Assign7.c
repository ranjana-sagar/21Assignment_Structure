#include<stdio.h>
#include<string.h>
struct time
{   
    int h,m,s;
};
int main()
{
    struct time t1={0},t2={0},t3={0};
    printf("\nEnter start time\n");
    scanf("%d:%d:%d",&t1.h,&t1.m,&t1.s);
    printf("\nEnter end time\n");
    scanf("%d:%d:%d",&t2.h,&t2.m,&t2.s);
    if(t2.s<t1.s)
    {
        t2.s+=60;
        t3.s=t2.s-t1.s;
        t2.m-=1;
    }
    else
        t3.s=t2.s-t1.s;
    if(t2.m<t1.m)
    {
        t2.m+=60;
        t3.m=t2.m-t1.m;
        t2.h-=1;
    }    
    else
        t3.m=t2.m-t1.m;
    t3.h=t2.h-t1.h;
    printf("\nTime difference is %d Hour, %d Minute, %d Second.\n",t3.h,t3.m,t3.s);    
    return 0;
}