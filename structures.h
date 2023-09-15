//
// Created by amedvedev on 15.09.23.
//

#ifndef MPI_STRUCTURES_H
#define MPI_STRUCTURES_H

#endif //MPI_STRUCTURES_H


const double DEFAULT_MAX_DOUBLE = 100.0;

double ** zeroMatrix(int rows, int cols);
double ** randMatrix(int rows, int cols, double min = 0.0, double max = DEFAULT_MAX_DOUBLE);

void print_matrix(double **A, int rows, int cols);
void deleteMatrixMemory(int rows, double **A);


double * zeroVector(int dim);
double * randVector(int dim, double min = 0.0, double max = DEFAULT_MAX_DOUBLE);

void print_vector(double *vec, int dim);
void deleteVectorMemory(double *vec);
