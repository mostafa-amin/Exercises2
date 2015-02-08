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
        float e=1.0;
        int i=1;
        int number=3;
        while (i!=10)
            
            {
                e+=(pow(number,i)/(fact_calc(i)));
                
                i++;
            }
                cout<<e<<"\n";

        
    }

int fact_calc(int x)
    {
        int fac=1;
        while (x!=0) {
            fac*=x;
            x--;
            
        }

        return fac;
        
    
    }

