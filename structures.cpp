//
// Created by amedvedev on 15.09.23.
//

#include <iostream>

#include "structures.h"
#include "randfuncs.h"





double ** zeroMatrix(int rows, int cols) {
    double ** A = new double * [rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new double [cols];
        for (int j = 0; j < cols; j++) {
            A[i][j] = 0.0;
        }
    }
    return A;
}

double ** randMatrix(int rows, int cols, double min, double max) {
    double ** A = new double * [rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new double [cols];
        for (int j = 0; j < cols; j++) {
            A[i][j] = randDouble(min, max);
        }
    }
    return A;
}

void print_matrix(double **A, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%8.5f ", A[i][j]);
        printf("\n");
    }
    printf("\n");
}

void deleteMatrixMemory(int rows, double **A) {

    for (int i1 = 0; i1<rows; i1++){
        delete A[i1];
    }
    delete[]A;


}

double * zeroVector(int dim) {
    double * vec = new double [dim];
    for (int i = 0; i < dim; i++) {
        vec[i] = 0.0;
    }
    return vec;
}

double * randVector(int dim, double min, double max) {
    double * vec = new double [dim];
    for (int i = 0; i < dim; i++) {
        vec[i] = randDouble(min, max);
    }
    return vec;
}

void deleteVectorMemory(double *vec) {
    delete []vec;
}


void print_vector(double *vec, int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%8.5f ", vec[i]);
        printf("\n");
    }
    printf("\n");
}


