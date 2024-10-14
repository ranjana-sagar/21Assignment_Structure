#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
struct employee input();
void sort(struct employee p[],int size);
void display(struct employee a);
int main()
{
    struct employee x[5],hse;
    int i;
    for(i=0;i<5;i++)
    {
      printf("\nEnter your %d Employee ID\nName\nSalary....\n\n",i+1);  
      x[i]=input();
    }
    sort(x,5);
    for(i=0;i<5;i++)
      display(x[i]);
    return 0;
}
void display(struct employee a)
{
    printf("\nEmployee Id is %d, %s, %0.2f",a.id,a.name,a.salary);
}
void sort(struct employee p[],int size)
{
   struct employee t;
   int i,j;
    for(i=0;i<size-1;i++)
      for(j=0;j<size-1-i;j++)
        if(p[j].salary>p[j+1].salary)
            t=p[j],p[j]=p[j+1],p[j+1]=t;
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