#include<stdio.h>
int main()
{
    int a,count;
    scanf("%d",&a);
    //count=a%8;
    if(a%8==0){ a=a-1;}
    else if(a<4){a=a+3;}
    else if(a<7){a=a-3;}
    else if(a==7){a=a+1;}
    switch(a)
    {
        case 0:printf("%dSL",a);break;
        case 1:printf("%dLB",a);break;
        case 2:printf("%dMB",a);break;
        case 3:printf("%dUB",a);break;
        case 4:printf("%dLB",a);break;
        case 5:printf("%dMB",a);break;
        case 6:printf("%dUB",a);break;
        case 7:printf("%dSU",a);break;
    }
    return 0;
}
