#include<stdio.h>

int main()
{
    int a=123456;
    float b=3.1416789;
    char c='f', c1='bhuiyan',c2[]="rony";



    printf("1 int=%d %0d %3d %15d %015d %0x15d\n",a,a,a,a,a,a);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("1 long int=%ld %0ld %3ld %15ld %015ld %0x15ld\n",a,a,a,a,a,a);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("1 short int=%hd %0hd %3hd %15hd %015hd %0x15hd\n",a,a,a,a,a,a);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("2 float=%f %0f %3f %15.10f %15.0f %015.2f %f %0x15f\n",b,b,b,b,b,b,(double)(int)b,b);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("3 double=%lf %0lf %3lf %15.10lf %15.0lf %015.2lf %0x15lf\n",b,b,b,b,b,b,b);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("4 exponential notation=%e %0e %3e %15.10e %15.0e %015.2e %0x15e\n",b,b,b,b,b,b,b);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("5 long exponential notation.=%le %0le %3le %15.10le %15.0le %015.2le %0x15le\n",b,b,b,b,b,b,b);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("6 string=%s %0s %3s %15.10s %15.0s %15.2s %015.2s\n","rony","rony","rony","rony","rony","rony","rony","rony");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\nLateral string\n");
    printf("%s\n\n", "This is a string");


    printf("7 char=%c %0c %3c %15.10c %15.0c %15.2c %015.2c\n",c,c,c,c,c,c,c);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("7 char1=%c %0c %3c %15.10c %15.0c %15.2c %015.2c\n",c1,c1,c1,c1,c1,c1,c1);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

     printf("7 char1=%s %0s %3s %15.10s %15.0s %15.2s %015.2s\n",c2,c2,c2,c2,c2,c2,c2);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");


    printf("7 char=%c %0c %3c %15.10c %15.0c %15.2c %015.2c\n",65,66,67,69,'65',"65",70);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");


}

