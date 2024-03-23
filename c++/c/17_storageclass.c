#include<stdio.h>
#include"sid.c"

// void display()
    // {
    //     static int a;
    //     int static b;
    //     printf("%d and %d",a , b);
    //     a++,b++;
    //     printf("%d and %d",a , b);
    // }
int main()
{
    // {
        /* auto storage class
         it is a default storage class, if you not defined any it assume to auto. its scope and lifetime is block
         or method in which it is defined , its default value is garbage value,*/
        //   auto int a;   //same as int a
        //   a=15;
        //   {
            // int a=10;   //if a is not initialze again then in next line it will print 15
            // printf("\n%d",a);
            // printf("\n%d",&a);   
        //   }
            // printf("\n%d",a);
            // printf("\n%d",&a);   //proves both a are create at different place
    // }
   
    // printf("\n%d",f);   // JUST TRY TO INCLUDE A FILE AND USE THEIR VARIABLE INCLUDE FROM SID.C
    // {
        /*register storage class
        its scope and lifetime is block or method in which it is defined, its default value is garbage value,
        its get memory location in register and register does not have address unlike memory so a pointer 
        can't point to register type variable but it can strore address of another variable it is defined 
        because of its access is very faster as compared to another variable*/


    // }
    // {
    //     // static storage classs
    //     // It is a special type of storage class in which a variable defined has its scope is block or function 
    //     // in which it is defined but its lifetime is whole programme , its initial value is 0; 
    //     display();

    //     printf("again function call");
    //     display();
    // }
    
    {
        // Extern storage class
        // It is like a global variable in which has lifetime has scope is whole programme,initalise value is 0,
        extern int a;
        int extern b;
        printf("%d and %d",a,b);

    }
}