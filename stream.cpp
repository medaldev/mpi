//
// Created by amedvedev on 15.09.23.
//


#include <fstream>
#include "stream.h"



void saveMatrixToFile(double **A, int rows, int cols, string filename) {
    ofstream myfile;
    myfile.open(filename);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) myfile << A[i][j] << " ";
        myfile << endl;
    }

    myfile.close();
}

void saveVectorToFile(double *v, int dim, string filename) {
    ofstream myfile;
    myfile.open(filename);

    for (int i = 0; i < dim; i++) {
        myfile << v[i] << endl;
    }

    myfile.close();
}