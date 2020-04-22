// Name:- Abhay Kumar Modi

// WAP to check the no. is Peterson no. or not.

#include<stdio.h>
int main()
{
    int n,c=0,r,a,p=1,i;
    printf("Enter a no. ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        p=1;
        for(i=1;i<=r;i++)
        {
            p=p*i;
        }
        n/=10;
        c=c+p;
    }
    if(c==a)
        printf("%d is an Peterson no.",a);
    else
        printf("%d is not an Peterson no.",a);
    return 0;
}
