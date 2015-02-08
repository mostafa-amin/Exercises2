//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program


#include <iostream>
using namespace std;




int main(int argc, const char * argv[])
{
    int i,j;
    for(i=1;i<=8;i++)
        {
            for(j=1;j<=8;j++)
            {
            if(i%2==0)
                {
                    printf(" ");
                    printf("*");
                }
                else
                {
                    printf("*");
                    printf(" ");
                }
            }
            printf("\n");
                
        }

            


}