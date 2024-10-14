#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
struct employee h_s_e(struct employee p[],int size);
struct employee input();
int main()
{
    struct employee x[5],hse;
    int i;
    for(i=0;i<5;i++)
    {
      printf("\nEnter your %d Employee ID\nName\nSalary....\n\n",i+1);  
      x[i]=input();
    }  
    hse=h_s_e(x,10);
    printf("\n\nHighest Salary of employee is %s with %.2f",hse.name,hse.salary);
    return 0;
}
struct employee h_s_e(struct employee *p,int size)
{
    struct employee a=*p;//p[0]//*(p+0)
    int i;
    for(i=0;i<size;i++)
       if(a.salary<(p+i)->salary)
          a=p[i];
    return a;      
}
struct employee input()
{
    struct employee a;
    scanf("%d",&a.id);
    fflush(stdin);
    fgets(a.name,30,stdin);
    scanf("%f",&a.salary);
    if(a.name[strlen(a.name)-1]=='\n')
      a.name[strlen(a.name)-1]='\0';
    return a;  
}