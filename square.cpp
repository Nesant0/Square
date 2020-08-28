#include <stdio.h>
#include <math.h>

int reshator(double a, double b, double c, double* x1, double* x2, int* solvenum)
    {
    double discriminant = b*b - 4*a*c;
    if (a != 0)
        {
        if (discriminant >= 0)
            {
            if (discriminant == 0)
                {
                *x1 = (-b)/(2*a);
                *x2 = (-b)/(2*a);
                *solvenum = 1;
                }
            else
                {
                *x1 = (-b + sqrt(discriminant))/(2*a);
                *x2 = (-b - sqrt(discriminant))/(2*a);
                *solvenum = 2;
                }
            }
        else
            {
            *solvenum = 0;
            }
        }
    else
        {
            if (b != 0)
                {
                *x1 = (-c/b);
                *x2 = (-c/b);
                *solvenum = 1;
                }
            else
                {
                *solvenum = 0;
                }
        }
    }

int main()
    {
    printf ("enter a,b,c (ax^2+bx+c)\n");

    double a, b, c, x1, x2;
    int solvenum;

    scanf ("%lg", &a);
    scanf ("%lg", &b);
    scanf ("%lg", &c);

    reshator(a, b, c, &x1, &x2, &solvenum);

    if (solvenum==1)
        {
        printf("only solution: x = %lg", x1 );
        }
    if (solvenum==2)
        {
        printf("first soultion: x1 = %lg\nsecond solution: x2 = %lg", x1, x2);
        }
    if (solvenum==0)
        {
        printf("no solution");
        }
    }








