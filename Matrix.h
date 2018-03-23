//
// Created by amar on 3/22/2018.
//

#ifndef NN_MATRIX_H
#define NN_MATRIX_H


#include <vector>
#include <ostream>
#include <iosfwd>

class Matrix
{
public:
    Matrix();
    Matrix(int height, int width);
    Matrix(std::vector<std::vector<double>> const &array);

    Matrix multiply(double const &value);
    Matrix add(Matrix const &m) const;
    Matrix subtract(Matrix const &m) const;
    Matrix multiply(Matrix const &m) const;

    Matrix dot(Matrix const &m) const;
    Matrix transpose() const;

    Matrix applyFunction(double (*function)(double)) const;

    void toString(std::ostream &flux) const;

private:
    std::vector<std::vector<double>> array;
    int height;
    int width;
};

std::ostream &operator<<(std::ostream &flux, Matrix const  &m);

#endif //NN_MATRIX_H
