//
// Created by nicolas on 26/05/2020.
//

#ifndef OKMD_CONTROLLER_H
#define OKMD_CONTROLLER_H

#include "Matrix.h"

class Controller {
public:
    int tacts;
    Controller(int p, int q, int m);
    Matrix run();
    int p, m, q;
    Matrix *a, *b, *e, *g, *strangeF, *strangeD, *maxStrange;
    TripleMatrix *f, *d;
    void getTripleMatrixProduct();
    void calcD(int index);
    void calcF(int index);
    double supAB(int i, int j, int k);
    double supBA(int i, int j, int k);
    void calcStrange();
    void calcMaxStrange();
    void printMatrix(const Matrix &matrix);
    void output();
};


#endif //OKMD_CONTROLLER_H
