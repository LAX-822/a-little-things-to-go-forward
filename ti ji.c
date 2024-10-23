 #include <stdio.h>
 #define PI 3.14
float Volm(float r, float h)
 {
   
    float x;
    x=PI*r*r*h;
    return x;
 }
 main()
 {
    float Radius,Height,Volume;
    scanf("%f%f",&Radius,&Height);
    Volume=Volm(Radius,Height) ;
    printf("Volume of cylinder is :%f\n",Volume); 
 }