#include <stdio.h>

struct student{
    int roll;
    char name[20];
    float sub1, sub2;
} S[1];
int main(){
   S[0].roll=99;
   S[0].name="hello";
   S[0].sub1=23;
   S[0].sub2=23;
    printf("%d\n",S[0].roll);
    printf("%s\n",S[0].name);
    printf("%f\n",S[0].sub1);
    printf("%f\n",S[0].sub2);

}