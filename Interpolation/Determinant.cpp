//
//  Determinant.cpp
//  alg
//
//  Created by Matek on 09.11.2018.
//  Copyright © 2018 Matek. All rights reserved.
//

#include "Determinant.hpp"

int Determinant::sign(int i, int j){
    if ((i+j)%2 == 0)
        return 1;
    else
        return -1;
}

vector<vector<double>> Determinant::smallerMatrix(vector<vector <double>> input, int i, int j){
    unsigned long order = input.size();
    vector<vector<double>> output(order-1, vector<double>(order-1));
    int x = 0, y = 0;
    
    for (int m=0; m<order; m++)
        if (m != i){
            y = 0;
            for (int n=0; n<order; n++)
                if (n != j){
                    output[x][y] = input[m][n];
                    y++;
                }
            x++;
        }
    
    return output;
}

double Determinant::determinant(vector<vector<double>> input)
{
    unsigned long order = input.size();
    double value;
    
    if (order > 2){
        value = 0;
        for (int j=0; j<order; j++){
            vector<vector<double>> Temp = smallerMatrix(input, 0, j);
            value = value + input[0][j]*(sign(0, j) * determinant(Temp));
        }
        
        return value;
    }
    
    else if (order == 2)
        return ((input[0][0] * input[1][1]) - (input[1][0] * input[0][1]));
    else
        return (input[0][0]);
}
