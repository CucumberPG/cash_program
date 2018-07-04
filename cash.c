#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float f;
    int q;
    int s;
    int a;
    int b;
    int c;
    int d;
    int e=0;
    int n=0;

    //Prompt user for the amount of change that they owe
    do
    {
        f = get_float("Change: ");
    }
    while (f < 0);

    //Perform operations with change that user inputs
    {
        a=f*100;
        q=25;
        s=a/q;
        n=s;
        printf ("The number of quarters is %i.\n",s);
        b = a%q;
    }

    if(b>0)
    {
       d=10;
       c=(b/d);
       e = b%d;
       n=n+c;
       printf("The number of dimes is %i.\n", c);
    }
    else
    {
        printf("No dimes.\n");
    }

    if(e>0)
    {
       d=5;
       c=(e/d);
       e = e%d;
       n=n+c;
       printf("The number of nickels is %i.\n", c);
    }
    else
    {
        printf("No nickels.\n");
    }

    if(e>0)
    {
       d=1;
       c=(e/d);
       e = e%d;
       n=n+c;
       printf("The number of pennies is %i.\n", c);
    }
    else
    {
        printf("No pennies.\n");
    }

    printf("You will need %i coins.\n", n);

}