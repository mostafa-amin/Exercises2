//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
// print 100 Asterisks 10 inn each line 

#include <iostream>
#include<math.h>
using namespace std;




int main(int argc, const char * argv[]){    // insert code here...
    
   
    
    int count =0;
    while (count<=100) {
        
        if((count%10)==0)
            printf("\n");
        printf("*");
        count++;
        
    }
}
