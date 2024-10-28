#include<stdio.h>
#include<math.h>
int main()
    {
        float a=1.01;
        float b=0.99;
        float c=365;
        float d,e;
        d =pow(a, c);
        e =pow(b, c);
        printf("每天进步0.01,一年后是%lf",d);
        printf("每天退步0.01,一年后是%lf",e);

        return 0;
    }
