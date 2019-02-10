//
//  main.cpp
//  alg
//
//  Created by Matek on 27.10.2018.
//  Copyright © 2018 Matek. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <array>
#include <cmath>
#include "Determinant.hpp"
#include "Matrix.hpp"

#define n 10

using namespace std;

int main(int argc, const char * argv[]) {
    double x[n];
    double y[] = {5, 1, 3, 2, 7, 5, -2, 3, 0, 0.2};
    
    int choose;
    
    cout << "1. liniowo\n2. kwadratowo\n3. szesciennie\n";
    cin >> choose;
    
    Matrix *m = new Matrix();
    
    for(int i=0; i<n; i++){
        x[i] = i;
    }
    
    if (choose == 1)
    for(int i=0; i<n-1; i++){
        cout << m->count(x+i, y+i, 1)[0] << "\t" << m->count(x+i, y+i, 1)[1];
        cout << endl << endl << endl << endl<< endl;
    }
    
    if (choose == 2)
    for(int i=0; i<n-1; i+=2){
        if (i+2 > n-1){
            cout << m->count(x+i, y+i, 1)[0] << "\t" << m->count(x+i, y+i, 1)[1];
            cout << endl;
        }
        else{
            cout << m->count(x+i, y+i, 2)[0] << "\t" << m->count(x+i, y+i, 2)[1] << "\t" << m->count(x+i,y+i,2)[2];
            cout << endl;
        }
    }
    
    if(choose == 3)
    for(int i=0; i<n-1; i+=3){
        if (i+3 > n-1){
            if (i+2 > n-1){
                cout << m->count(x+i, y+i, 1)[0] << "\t" << m->count(x+i, y+i, 1)[1];
                cout << endl;
            }
            else{
                cout << m->count(x+i, y+i, 2)[0] << "\t" << m->count(x+i, y+i, 2)[1] << "\t" << m->count(x+i,y+i,2)[2];
                cout << endl;
            }
        }
        else{
            cout << m->count(x+i, y+i, 3)[0] << "\t" << m->count(x+i, y+i, 3)[1] << "\t" << m->count(x+i,y+i,3)[2] << "\t" << m->count(x+i, y+i, 3)[3];
            cout << endl;
        }
    }
    
    
    return 0;
}

