//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program to print multiples of 2 until automatically termainate


#include <iostream>
using namespace std;




int main(int argc, const char * argv[])
{
     short int  ml=1;
    while (ml>0) {
        ml*=2;
        printf("\n %d",ml);
    }
            
    return 0;

}