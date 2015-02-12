//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
#include<math.h>
using namespace std;
int fact_calc(int x);




int main(int argc, const char * argv[])

    {
        int i,j;//loop variants
        /*pattern a */
         
        for(i=1;i<=10;i++)
            {
                for(j=1;j<=i;j++)
                    printf("*");
        
                       printf("\n");
            }
       
        
        printf("\n\n\n");
        
         /*pattern b */
        
        for(i=10;i>=1;i--)
                {
                    for(j=1;j<=i;j++)
                        printf("*");
                    printf("\n");
                
                
                }
        
        printf("\n\n\n");
        
         /*pattern c */
        
       for(i=10;i>=1;i--)
            {
                for(j=1;j<=10-i;j++)
                    {
                        printf(" ");
                    
                    }
                
                for(j=1;j<=i;j++)
                    {
                        printf("*");
                    }
                
                printf("\n");
            }
        
        
        /*pattern d */
        
        for (i=1; i<=10; i++) {
            
            for (j=1; j<10-i; j++) {
                printf(" ");
            }
            
            for (j=1; j<=i; j++) {
                printf("*");
            }
            printf("\n");
        }

    
    }


