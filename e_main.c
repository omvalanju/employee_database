#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "e_functions.h"
#include "e_struct.h"

int main()
{   int op,j;
    
    
   // enum op{Add=1, Remove=2, Update=3, Exit=4};
    

    for (;;)
    {
        printf("Select Operation:\n1.Add\n2.Remove\n3.Update\n4.Exit\nEnter Operation number:");

        scanf("%d",&op);
        printf("**************************\n");

        if (op>4)
        {
            printf("Invalid Operation");
            continue;
        }
        else
            switch(op)
            {
                case Add:
                    add();
                    break;

                case Remove:
                    rmv();
                    break;

                case Update:
                    modify();
                    break;

                case Exit:
                    exit(0);
             }

             for(j=0;j<=count-1;j++)
             {
                  printf("**************************\n");
                  printf("Name %d:%s\n",j+1,e[j].name);
                  printf("Number %d:%d\n",j+1,e[j].number);
                  printf("Salary %d:%d\n",j+1,e[j].salary);
                  printf("**************************\n");
              }


    }
}

