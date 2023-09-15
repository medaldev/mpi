//
// Created by amedvedev on 15.09.23.
//

#include <stdexcept>
#include "operations.h"
#include "structures.h"


double * matrixOnVector(double **A, int rows, int cols, double *v, int dim) {
    if (cols != dim) {
        throw std::invalid_argument("Vector dim must be equal to matrix rows");

    }
    double * result = zeroVector(rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            result[i] += A[i][j] * v[j];

        }

    }
    return result;
}


double ** matrixOnMatrix(double **A, int rows1, int cols1, double **B, int rows2, int cols2) {

    if (rows2 != cols1) {
        throw std::invalid_argument("Incorrect matrixes shapes");

    }
    double ** result = zeroMatrix(rows1, cols2);
    for (int i=0; i<rows1; i++){
        result[i] = new double[cols2];
        for (int j=0; j<cols2; j++){
            for(int p=0; p<cols1; p++) {
                result[i][j] += A[i][p] * B[p][j];
            }
        }
    }
    return result;
}