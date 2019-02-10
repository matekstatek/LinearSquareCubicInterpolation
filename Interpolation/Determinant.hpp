//
//  Determinant.hpp
//  alg
//
//  Created by Matek on 09.11.2018.
//  Copyright © 2018 Matek. All rights reserved.
//

#ifndef Determinant_hpp
#define Determinant_hpp

#include <cstdio>
#include <vector>
#include <cstdlib>

using namespace std;

class Determinant{
public:
    Determinant(){}
    ~Determinant(){}
    
    double determinant(vector<vector <double>> array);
    
private:
    vector<vector <double>> smallerMatrix(vector<vector <double>> input, int i, int j);
    int sign(int i, int j);
};

#endif /* Determinant_hpp */
