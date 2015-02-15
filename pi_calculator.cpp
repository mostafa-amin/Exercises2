//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
#include<math.h>
using namespace std;

//(Calculating the Value of π) Calculate the value of π from the infinite series 44444...
//π = 4 – - + -- – - + - – -- + 3 5 7 9 11


int main(int argc, const char * argv[])

    {
        
        double number =4;
        double denomenator=1.0;
        int i;
        double pi=0.0;
        int accuracy=500;
        for (i=0; i<accuracy; i++) {
            if(i%2==0)
                pi+=number/denomenator;
            else
                pi-=number/denomenator;
        
            printf("%f",pi);
            printf("\n");
            denomenator+=2.0;
        }
        
        
        
        
    }