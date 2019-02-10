//
//  Matrix.hpp
//  alg
//
//  Created by Matek on 09.11.2018.
//  Copyright © 2018 Matek. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include "Determinant.hpp"
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Matrix{
public:
    Matrix(){}
    ~Matrix(){}
    
    vector<double> count(double *x, double *y, int choose);
private:
    Determinant *det;
};

#endif /* Matrix_hpp */
