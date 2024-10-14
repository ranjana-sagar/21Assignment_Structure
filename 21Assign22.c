#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
void input(struct employee *p);
int main()
{
    struct employee a;
    input(&a);
    printf("\nEmployee Id is %d\nName - %s\nSalary - %0.2f",a.id,a.name,a.salary);
    return 0;
}
void input(struct employee *p)
{
   printf("\nEnter your ID\nName\nSalary.....\n\n");
   scanf("%d",&p->id);
   fflush(stdin);
   fgets(p->name,30,stdin);
   scanf("%f",&p->salary);
   if(p->name[strlen(p->name)-1]=='\n')
       p->name[strlen(p->name)-1]='\0';
}
/* printf("\nEnter your ID\nName\nSalary.....\n");
   scanf("%d",&(*p).id);
   fflush(stdin);
   fgets((*p).name,30,stdin);
   scanf("%f",&(*p).salary);
   if((*p).name[strlen((*p).name)-1]=='\n')
       (*p).name[strlen((*p).name)-1]='\0';*/