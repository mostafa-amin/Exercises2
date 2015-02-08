//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.
//Write a program to count sevens in an integer


#include <iostream>
using namespace std;




int main(int argc, const char * argv[])
{
    int x;
    int y;
    int number;
    cout<<"please enter your integer \n";
    cin>>x;
    while (x>0) {
        y=x%10;
        if(y==7)
            number+=1;
        x/=10;
        
        
    }
cout<<number<<"\n";
}