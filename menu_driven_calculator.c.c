#include <stdio.h>

int main()
{
    int choice,a,b,sum,diff,mul,rem,qut;
    printf("c program for menu driven calculator\n");
    printf("____________________________________\n");
    printf("1-addition\n2-substraction\n3-multiply\n4-division\n");
    printf("enter a choice:");
    scanf("%d",&choice);
    printf("enter value for a:");
    scanf("%d",&a);
    printf("enter value for b:");
    scanf("%d",&b);
    
    if(choice==1)
    {
        sum=a+b;
        printf("sum is %d",sum);
    }
    else if(choice==2)
    {
        diff=a-b;
        printf("diffrence is %d",diff);
    }
    else if(choice==3)
    {
        mul=a*b;
        printf("product is %d",mul);
    }
    else if(choice==4)
    {
        rem=a%b;
        printf("remainder is %d",rem);
        qut=a/b;
        printf("qutiont is %d",qut);
    }
    

    return 0;
}
