//
//  main.cpp
//  training
//
//  Created by mostafa amin on 07/02/15.
//  Copyright (c) 2015 mostafa amin. All rights reserved.


#include <iostream>
using namespace std;
int encrypt(int data);




int main(int argc, const char * argv[])
{
    int result_encrypted;
    result_encrypted=encrypt(5678);
    cout<<result_encrypted<<"\n";
    
    
}

int encrypt(int data)
    {
        int x1,x2,x3,x4;
        int x1encrypted;
        int x2encrypted;
        int x3encrypted;
        int x4encrypted;
        int encrypted_data=0;
        x4=data%10;
        x3=(data%100)/10;
        x2=(data%1000)/100;
        x1=(data%10000)/1000;
        x1encrypted=(x1+7)%10;
        x2encrypted=(x2+7)%10;
        x3encrypted=(x3+7)%10;
        x4encrypted=(x4+7)%10;
        encrypted_data+=(x1encrypted*1)+(x2encrypted*10)+(x3encrypted*100)+(x4encrypted*1000);
        return encrypted_data;
        
        }
    
    
    

