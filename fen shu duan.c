#include<stdio.h>

int main()
{
    double X;
    char grade;
    scanf("%lf", &X);

    if ((90 <= X) && (X <= 100))
    {
        grade = 'A';
    }
    else if ((80 <= X) && (X < 90))
    {
        grade = 'B';
    }
    else if ((70 <= X) && (X < 80))
    {
        grade = 'C';
    }
    else if ((60 <= X) && (X < 70))
    {
        grade = 'D';
    }
    else if ((X < 60) && (0 <= X))
    {
        grade = 'E';
    }
    else
    {
        printf("Score is error!");
        return 0; 
    }

    printf("%c\n", grade);

    return 0;
}