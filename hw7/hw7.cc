//*********************************************
//
//  hw7.cc
//  Andrew Stauffer
//  as211416@ohio.edu
//  CS 3560
//  This is the implimentation file for the
//  stddev function.
//
//*********************************************

#include "hw7.h"

double stddev(int n, ...){
    
    double total = 0; //the total or sum
    double var = 0; //variance
    
    va_list args; //holds data used for va_start and va_end
    
    va_start(args, n);

    //loop for calculating the total
    for(size_t x = 0; x < n; ++x){
        int z = va_arg(args, int);
        total += z;
    }
    
    va_end(args);
    
    va_start(args, n);
    
    double ave = total /= n; //the average of the set
    
    //loop for the first variance
    for(size_t x = 0; x < n; ++x){
        int z = va_arg(args, int);
        var += (z - ave) * (z - ave);
    }
    
    va_end(args);
    
    var /= n;
    
    //message if the standard deviation is zero
    if(var == 0){
        cout << "Sigma is zero." <<endl;
    }
    
    return sqrt(var);
}
