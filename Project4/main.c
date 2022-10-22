#include<stdio.h>
#include<stdlib.h>

struct stu
{
    char name[30];
    int roll,sub1,sub2,sub3,total;
    double per;
};

int i,n,num,sum=0;
struct stu d[100];

void add()
{
    for(i=sum;i<sum+n;i++)
    {
        printf("\n");
        printf("Enter Student %d Details\n",i+1);
        printf("Enter Roll No = ",i+1);
        scanf("%d",&d[i].roll);
        printf("Enter Name = ",i+1);
        scanf("%s",&d[i].name);
        printf("Enter Maths Marks = ",i+1);
        scanf("%d",&d[i].sub1);
        printf("Enter Science Marks = ",i+1);
        scanf("%d",&d[i].sub2);
        printf("Enter English Marks = ",i+1);
        scanf("%d",&d[i].sub3);
    }
    sum=sum+n;
}

void search()
{
    printf("Enter Roll No = ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(d[i].roll==num)
       {
            printf("Name : %s\n",d[i].name);
            printf("Roll No : %d\n",d[i].roll);
            printf("*******Result*******\n");
            printf("Maths : %d\n",d[i].sub1);
            printf("Science : %d\n",d[i].sub2);
            printf("English : %d\n",d[i].sub3);
            d[i].total=d[i].sub1+d[i].sub2+d[i].sub3;
            d[i].per=d[i].total/3.0;
            printf("Percentage : %.2f\n",d[i].per);
      }
    }

    if(d[i].roll!=num)
    {
        printf("Roll No not found..!\n");
    }
}

void show()
{
    printf("Name   Roll No       Maths        Science       English     Percentage\n");
    for(i=0;i<sum;i++)
    {
            d[i].total=d[i].sub1+d[i].sub2+d[i].sub3;
            d[i].per=d[i].total/3.0;
            printf("%s       %d           %d          %d          %d         %.2f\n",d[i].name,d[i].roll,d[i].sub1,d[i].sub2,d[i].sub3,d[i].per);
            printf("\n");
    }
}
void update()
{
    int k=1,yesn,choice1;
    printf("Enter Roll No = ");
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(num==d[i].roll)
        {
          printf("Do you really want to update?\n");
          printf("1) Yes\n");
          printf("2) No\n");
          printf("Please chose any one = ");
          scanf("%d",&yesn);
          if(yesn==1)
          {
                printf("What you want to update?\n");
                printf("\n");
                printf("1) Name\n");
                printf("*******Marks*******\n");
                printf("2) Maths\n");
                printf("3) Science\n");
                printf("4) English\n");
                printf("0) Exit\n");

                  while(k)
                  {
                      if(choice1!=0)
                     {
                        printf("\n");
                        printf("1) Name\n");
                        printf("*******Marks*******\n");
                        printf("2) Maths\n");
                        printf("3) Science\n");
                        printf("4) English\n");
                        printf("0) Exit\n");
                     }
                       printf("\n");
                       printf("Choose which you want to update = ");
                       scanf("%d",&choice1);

                        switch(choice1)
                       {
                        case 1:
                        printf("Old Name is: %s\n",d[i].name,i+1);
                        printf("Enter New Name: ");
                        scanf("%s",&d[i].name);
                        printf("Updated Name: %s",d[i].name);
                        printf("\n");
                        break;

                        case 2:
                        printf("Old Marks in Maths: %d\n",d[i].sub1);
                        printf("Enter New Marks: ");
                        scanf("%d",&d[i].sub1);
                        printf("Marks in Maths: %d",d[i].sub1);
                        printf("\n");
                        break;

                        case 3:
                        printf("Old Marks in Science: %d\n",d[i].sub2);
                        printf("Enter New Marks: ");
                        scanf("%d",&d[i].sub2);
                        printf("Marks in Science: %d",d[i].sub2);
                        printf("\n");
                        break;

                        case 4:
                        printf("Old Marks in English: %d\n",d[i].sub3);
                        printf("Enter New Marks: ");
                        scanf("%d",&d[i].sub3);
                        printf("Marks in English: %d",d[i].sub3);
                        printf("\n");
                        break;

                        case 0:
                        printf("Exit\n");
                        k=0;
                        break;

                        default:
                         printf("Invalid choice,try again..!\n");
                       }
                }
            }
        }
      }
      if(num!=d[i].roll)
      {
          printf("Roll No not found..!\n");
      }
}
int main()
{
    int choice;
    i=1;
    printf("\n");
    printf("*********ASTERISC CLASSES*********\n");
    printf("1) Add Students\n");
    printf("2) Search Students\n");
    printf("3) Show Students\n");
    printf("4) Update Students Data\n");
    printf("0) Exit\n");

    while(i)
    {
        if(choice!=0)
        {
            printf("\n");
            printf("*********ASTERISC CLASSES*********\n");
            printf("1) Add Students\n");
            printf("2) Search Students\n");
            printf("3) Show Students\n");
            printf("4) Update Students Data\n");
            printf("0) Exit\n");
        }

        printf("\n");
        printf("Enter your choice = ");
        scanf("%d",&choice);

    switch(choice)
    {
         case 1:
         printf("Enter the number of students = ");
         scanf("%d",&n);
         printf("\n");
         printf("^^^^^^^^^::ADD DETAILS::^^^^^^^^^\n");
         add();
         break;

         case 2:
         printf("\n");
         printf("^^^^^^^^^::SEARCH DETAILS::^^^^^^^^^\n");
         search();
         break;

         case 3:
         printf("\n");
         printf("^^^^^^^^^::SHOW DETAILS::^^^^^^^^^\n");
         show();
         break;

         case 4:
         printf("\n");
         printf("^^^^^^^^^::UPDATE DETAILS::^^^^^^^^^\n");
         update();
         break;

         case 0:
         printf("Exit\n");
         i=0;
         break;

         default:
         printf("Invalid user input,try again..!\n");
    }
    }

    return 0;
}
