#include <iostream>

#include "structures.h"
#include "operations.h"


using namespace std;



int main() {

    const int n = 3;
    const int m = 4;
    const double a = 0.0, b = 10.;


    double **A = randMatrix(n, m, a, b);
    cout << "A = " << endl;
    print_matrix(A, n, m);

    double *v = randVector(m, a, b);
    cout << "v = " << endl;
    print_vector(v, m);

    double *c = matrixOnVector(A, n, m, v, m);
    cout << "A * v = " << endl;
    print_vector(c, n);


    const int k = 5;
    double **B = randMatrix(m, k, a, b);
    cout << "B = " << endl;
    print_matrix(B, m, k);


    double ** H = matrixOnMatrix(A, n, m, B, m, k);
    cout << "A * B = " << endl;
    print_matrix(H, n, k);


    deleteMatrixMemory(n, A);
    deleteMatrixMemory(m, B);
    deleteMatrixMemory(n, H);

    deleteVectorMemory(c);
    deleteVectorMemory(v);



    return 0;

}
