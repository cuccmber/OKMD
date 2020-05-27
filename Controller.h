//
// Created by nicolas on 26/05/2020.
//

#ifndef OKMD_CONTROLLER_H
#define OKMD_CONTROLLER_H

#include "Matrix.h"

class Controller {
public:
    Controller();

    virtual ~Controller();

private:
    int p, m, q;
    Matrix *a, *b, *e, *g;
    TripleMatrix *f, *d;
    Matrix matrixProduct(const Matrix &one, const Matrix &two);
    void getTripleMatrixProduct(const Matrix &one, const Matrix &two);
    void calcD(int index);
    void calcF(int index);
};


#endif //OKMD_CONTROLLER_H
