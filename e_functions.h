#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "e_struct.h"

int add(){

    //int no,sal,op,j,k,y,z;

     printf("Enter Name:\n");
     scanf("%s",e[count].name);

     printf("Enter Number:\n");
     scanf("%d",&e[count].number);

     printf("Enter Salary:\n");
     scanf("%d",&e[count].salary);

     count = count + 1;

}


int rmv()
{
    int del,x;
    printf("Enter Element number to delete:");
    scanf("%d",&del);

    if (del>count)
        printf("Entry does not exist");

    else

        for(x=del-1;x<=count-1;x++)
        {
            strcpy(e[x].name,e[x+1].name);
            e[x].number=e[x+1].number;
            e[x].salary=e[x+1].salary;
        }

         count = count - 1;

}


int modify()
{
    int x,y,z;

    printf("Select category to update:\n1.Name\n2.Number\n3.Salary\nEnter Category Number:");
    scanf("%d",&x);
    printf("Enter Element Number");
    scanf("%d",&y);

    if (y>count)
        printf("Entry does not exist");

    else
        z = y - 1;
        switch(x)
        {
            case 1:
                printf("Enter Name:");
                scanf("%s",e[z].name);
                break;

            case 2:
                printf("Enter Number:");
                scanf("%d",&e[z].number);
                break;

            case 3:
                printf("Enter Salary:");
                scanf("%d",&e[z].salary);
                break;
        }
}

