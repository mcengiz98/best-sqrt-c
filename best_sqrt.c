#include "best_sqrt.h"

typedef long double ld;

long double my_abs(long double x){
    if(x < 0){
        return -x;
    }
    return x;
}

long double best_sqrt(long double x){
    ld possibleSqrt = x/2;
    ld goal = possibleSqrt * possibleSqrt;
    ld lowerBound = 0;
    ld upperBound = x;
    while (goal != x)
    {
       if (goal > x){
        upperBound = possibleSqrt;
        possibleSqrt = (upperBound + lowerBound)/2;
        goal = possibleSqrt * possibleSqrt;
       }
         else if(goal < x){
          lowerBound = possibleSqrt;
          possibleSqrt = (upperBound + lowerBound)/2;
          goal = possibleSqrt * possibleSqrt;
         }
        if (my_abs(x-goal) <= 0.000000000000002){
            break;
        }
    }
    return possibleSqrt;
}
