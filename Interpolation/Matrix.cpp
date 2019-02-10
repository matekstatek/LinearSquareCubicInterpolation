//
//  Matrix.cpp
//  alg
//
//  Created by Matek on 09.11.2018.
//  Copyright © 2018 Matek. All rights reserved.
//

#include "Matrix.hpp"
#include "Determinant.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>

using namespace std;

vector<double> Matrix::count(double *x, double *y, int choose){
    vector<double> returned;
    det = new Determinant();
    int size;
    
    if(choose == 1){
        size = 2;
        
        vector<vector<double>> matrix(size, vector<double>(size));
        vector<vector<double>> matrixA(size, vector<double>(size));
        vector<vector<double>> matrixB(size, vector<double>(size));
        
        for(int i=0; i<size; i++){
            matrix[i][0] = x[i];
            matrix[i][1] = 1;
            
            matrixA[i][0] = y[i];
            matrixA[i][1] = 1;
            
            matrixB[i][0] = x[i];
            matrixB[i][1] = y[i];
        }
        
        double W = det->determinant(matrix);
        double Wa = det->determinant(matrixA);
        double Wb = det->determinant(matrixB);
        
        returned.push_back(Wa/W);
        returned.push_back(Wb/W);
        
    }
    
    else if(choose == 2){
        size = 3;
        
        vector<vector<double>> matrix(size, vector<double>(size));
        vector<vector<double>> matrixA(size, vector<double>(size));
        vector<vector<double>> matrixB(size, vector<double>(size));
        vector<vector<double>> matrixC(size, vector<double>(size));
        
        
        for(int i=0; i<size; i++){
            matrix[i][0] = pow(x[i], 2);
            matrix[i][1] = x[i];
            matrix[i][2] = 1;
            
            matrixA[i][0] = y[i];
            matrixA[i][1] = x[i];
            matrixA[i][2] = 1;
            
            matrixB[i][0] = pow(x[i], 2);
            matrixB[i][1] = y[i];
            matrixB[i][2] = 1;
            
            matrixC[i][0] = pow(x[i], 2);
            matrixC[i][1] = x[i];
            matrixC[i][2] = y[i];
        }
        
        double W = det->determinant(matrix);
        double Wa = det->determinant(matrixA);
        double Wb = det->determinant(matrixB);
        double Wc = det->determinant(matrixC);
        
        returned.push_back(Wa/W);
        returned.push_back(Wb/W);
        returned.push_back(Wc/W);
    }
    
    else if(choose == 3){
        size = 4;
        
        vector<vector<double>> matrix(size, vector<double>(size));
        vector<vector<double>> matrixA(size, vector<double>(size));
        vector<vector<double>> matrixB(size, vector<double>(size));
        vector<vector<double>> matrixC(size, vector<double>(size));
        vector<vector<double>> matrixD(size, vector<double>(size));
        
        for(int i=0; i<size; i++){
            matrix[i][0] = pow(x[i], 3);
            matrix[i][1] = pow(x[i], 2);
            matrix[i][2] = x[i];
            matrix[i][3] = 1;
            
            matrixA[i][0] = y[i];
            matrixA[i][1] = pow(x[i], 2);
            matrixA[i][2] = x[i];
            matrixA[i][3] = 1;
            
            matrixB[i][0] = pow(x[i], 3);
            matrixB[i][1] = y[i];
            matrixB[i][2] = x[i];
            matrixB[i][3] = 1;
            
            matrixC[i][0] = pow(x[i], 3);
            matrixC[i][1] = pow(x[i], 2);
            matrixC[i][2] = y[i];
            matrixC[i][3] = 1;
            
            matrixD[i][0] = pow(x[i], 3);
            matrixD[i][1] = pow(x[i], 2);
            matrixD[i][2] = x[i];
            matrixD[i][3] = y[i];
            
            
        }
        
        double W = det->determinant(matrix);
        double Wa = det->determinant(matrixA);
        double Wb = det->determinant(matrixB);
        double Wc = det->determinant(matrixC);
        double Wd = det->determinant(matrixD);
        
        
        returned.push_back(Wa/W);
        returned.push_back(Wb/W);
        returned.push_back(Wc/W);
        returned.push_back(Wd/W);
        
    }
    
    return returned;
}
