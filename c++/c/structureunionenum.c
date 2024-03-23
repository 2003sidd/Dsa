#include<stdio.h>
#include<stdlib.h>
 struct sidd {
    int a;
    char b;
    double c;
    float d;
    long double e;
    // long
};
// union abhay {
//     int a ;
//     char b;
// };
// enum{

// };

int main()
{
    // union abhay a;
    // printf("%d\n",sizeof(a));
//     struct sidd s;
//     // s.a=5;
//  printf("%d\n",sizeof(s));
//  printf("%d\n",sizeof(s.a));
//  printf("%d\n",sizeof(s.b));
//  printf("%d\n",sizeof(s.c));
//  printf("%d\n",sizeof(s.d));
//  printf("%d\n",sizeof(s.e));
//  printf("%u\n",&s);
//  printf("%u\n",&s.a);
//  printf("%u\n",&s.b);
//  printf("%u\n",&s.c);
//  printf("%u\n",&s.d);
//  printf("%u\n",&s.e);

//  s.b='c';
//  printf("value is %d and favourute character is %c",s.a,s.b);
//  printf("\nSab badiya ha");
int *p=(int*)malloc(sizeof(int));
*p=7;
printf("the value is %d and address is %u and %u",*p,p,&p);
}