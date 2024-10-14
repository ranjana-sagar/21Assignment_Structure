#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
struct employee input();
int main()
{
    struct employee a;
    a=input();
    printf("Employee Id is %d\nName - %s\nSalary - %0.2f",a.id,a.name,a.salary);
    return 0;
}
struct employee input()
{
    struct employee a;
    printf("\nEnter your ID\nName\nSalary....\n");
    scanf("%d",&a.id);
    fflush(stdin);
    fgets(a.name,30,stdin);
    scanf("%f",&a.salary);
    if(a.name[strlen(a.name)-1]=='\n')
      a.name[strlen(a.name)-1]='\0';
    return a;  
}