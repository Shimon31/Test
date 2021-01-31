#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int ID;
    struct node *next;
} *head;

int main()
{
    int menu;
    head = NULL;
    while(1)
    {
        printf("choose your option :");
        printf("\n 1.Add \n 2.Print\n 3.Exit \n");
        scanf("%d",&menu);

        switch (menu)
        {
            case 1 :
            break;

            case 2:
            break;
            
            case 3:
            exit(0);
            break;

            default:
            printf("Please enter a right value\n");
            break;
        }
    }
}