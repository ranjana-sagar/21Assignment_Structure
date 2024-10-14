#include<stdio.h>
#include<string.h>
struct dob
{
    short int d,m;
    long int year;
};
struct student
{
    char name[30];
    short int class;
    long long int Roll_no;
    struct dob d;
};
struct student input();
void display(struct student p);
int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
       printf("\nEnter %d Student information\n\n",i+1); 
       s[i]=input();
    }   
    for(i=0;i<10;i++)
       display(s[i]);   
    return 0;
}
void display(struct student s1)
{
    printf("Name:- %s\nClass:- %d\nRoll No:- %dth\nD.O.B:- %d/%d/%d\n\n",s1.name,s1.class,s1.Roll_no,s1.d.d,s1.d.m,s1.d.year);
}
struct student input()
{
    struct student s1;
    printf("Name\nClass\nRoll No\nDate of birth....\n\n");
    fgets(s1.name,30,stdin);
    fflush(stdin);
    if(s1.name[strlen(s1.name)-1]=='\n')
       s1.name[strlen(s1.name)-1]='\0';
    scanf("%d%d",&s1.class,&s1.Roll_no);
    scanf("%d/%d/%d",&s1.d.d,&s1.d.m,&s1.d.year);
    fflush(stdin);
    ///////////////////////////////////////////////////////////user input
    return s1;   
}