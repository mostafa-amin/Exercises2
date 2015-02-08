//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
// write a program to convert 5 digit integer if zeros and ones (Binary Format)
//into the decimal equivalent



#include <iostream>
#include<math.h>
using namespace std;




int main(int argc, const char * argv[]){    // insert code here...
    
   
    
    long int count =1;
    while (count<=300000) {
        
        if((count%100000)==0)
            printf("Multiple is %d\n",(count/100000));
        count++;
        
    }
}
