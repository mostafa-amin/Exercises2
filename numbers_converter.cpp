//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
#include<math.h>
using namespace std;
//(Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program that
//prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range 1 through 256. If you’re not familiar with these number systems, read Appendix C before you at- tempt this exercise.


void decimal_to_octal(unsigned int num);
char to_char(int digit);
int main(int argc, const char * argv[])

{
    short i;// iterator
    int j;//bit level iterator
    int number;
    short n=16;
    int rem;
    int mask=(1<<(n-1));//mask
            int oct_value=0;
   //         int hex_value=0;
    for(i=1;i<=256;i++)// values to be converted
        
    {
        number=i;
        mask=(1<<(n-1));
        for (j=0; j<n; j++) {//bitwise processing
            
            if ((number&mask)==0) {
                putchar('0');
            }
            else
                putchar('1');
            mask>>=1;
            
        }
        printf("\n");//lines between output values
        
        
    }
    printf("\n\n\n\n\n");
    printf("octal Values\n");
    
    for(i=1;i<=256;i++)// values to be converted
        
    {
        number=i;
        j=0;
        oct_value=0;
        if(number<=8)
            cout<<number<<"\n";
        else if(number>8) {
            while(number!=0) {
                
                rem =(number%8);
                number/=8;
                oct_value+=rem*(pow(10,j));
                j++;
            }
        
        cout<<oct_value<<"\n";
        }
    }
    
    printf("\n\n\n\n\n");
    printf("hex Values\n\n");
    
    
    for (i=0; i<=256; i++) {
        decimal_to_octal(i);
        printf("\n");
    }
   
    
    
}


char to_char(int digit)
{
    char set[]="abcdef";
    if(digit>=10)
        return set[digit-10];
    else
        return digit+48;
}

void decimal_to_octal(unsigned int num)
{
    if(num==0)
        return ;
    else
    {
        decimal_to_octal(num/16);//The recursive call makes sure that the printing will be in the proper order
        printf("%c",to_char(num%16));
    }
}
