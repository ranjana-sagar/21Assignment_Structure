#include<stdio.h>
#include<string.h>
struct marks
{
    char name[30];
    long long int roll_no;
    int chem_marks,maths_marks,phy_marks;
};
int input(struct marks s[],int size);
void display_percentage(struct marks s);
int main()
{
    struct marks student[5];
    int i,a;
    a=input(student,5);
    if(a!=1)
    {
        for(i=0;i<5;i++)
          display_percentage(student[i]);
    }
    return 0;
}
int input(struct marks s[],int size)
{
   int i;
   for(i=0;i<size;i++)
   {
       printf("\n\nEnter %d Student's details..\n",i+1);
       printf("Name\nRoll No\nChemistry Marks\nMathematics Marks\nPhysics Marks\n\n");
       fgets(s[i].name,30,stdin);
       fflush(stdin);
       if(s[i].name[strlen(s[i].name)-1]=='\n')
         s[i].name[strlen(s[i].name)-1]='\0';
       scanf("%lld%d%d%d",&s[i].roll_no,&s[i].chem_marks,&s[i].maths_marks,&s[i].phy_marks);
       
       if((s[i].chem_marks>100)||(s[i].maths_marks>100)||(s[i].phy_marks>100))
          break;
       fflush(stdin);
   }
   if(i<size)
   {
      printf("Enter the correct marks. Marks must be out of 100");
      return 1;
   }
}
void display_percentage(struct marks s)
{
    float p=0;
    p=s.chem_marks+s.maths_marks+s.chem_marks;
    p=(p*100)/300.0;
    printf("\n%s - %0.0f percent\n",s.name,p);
}