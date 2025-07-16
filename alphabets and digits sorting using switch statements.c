#include<stdio.h>
int main()

{
    int n1,n2,n3;
    printf("enter threee numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
     if(n1>n2 && n1<n3||(n1>n3 && n1<n2))
     {
        printf("n1 is the middle number");
     }
        else if(n2>n1 && n2<n3||n2<n1&n2>n3)
        {
            printf("n2  is the middle number ");
        }
        else if(n3>n2 && n3<n1||n3<n2 && n1>n3)
        {
            printf("n3 is the middle number");

        }
    }