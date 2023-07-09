#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,n,i;

    printf("Enter the no of integers you want:\n");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("There is no memory\n");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter an Integer::");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
    return 0;
}