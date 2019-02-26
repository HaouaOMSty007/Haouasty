//Haoua Oumarou Moussa
#include <stdio.h>
#include<cs50.h>

int main (void)
{
    int sum=0;
    //input credit card
    long long cc;

    do
    {
        cc=get_long_long("Credit Card Number: ");
    }
    while(cc<0);

    int count=0;

    long long number=cc;
    while (number>0)
    {
        number=number/10;
        count++;
    }
    if(count!=13 && count!=15 && count!=16)
    {
        printf("INVALID card number\n");
    }

    int digit [count];
    for(int i=0; i<count; i++)
    {
        digit[i]=cc%10;
        cc=cc/10;
    }

    int odigit [count];
    for (int i=0; i<count;i++)
    {
        odigit[i]=digit [i]*2;
    }

    for (int i=0;i<count; i++)
    {
        sum=sum+digit[i]%10+digit[i]/10%10;
    }

    if(sum%10==0)
    {
        if(count==13 && digit[12]==4 && sum%10==0)
        {
            printf("VALID VISA\n");
        }
        if(count==15 && odigit[14]==3 && sum%10==0 && (odigit[13]==4 || odigit[13]==7))
        {
            printf("VALID AMEX\n");
        }
        if(count==16 && odigit[15]==5 && (odigit[14]==1 || odigit[14]==2 || odigit[14]==3 || odigit[14]==4 || odigit[14]==5) && sum%10==0)
        {
            printf("VALID MASTERCARD\n");
        }
    }
    //if cheksum not verified=INVALID
    else
    {
        printf("INVALID\n");
    }
}