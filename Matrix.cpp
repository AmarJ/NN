//
// Created by amar on 3/22/2018.
//
#include <assert.h>
#include "Matrix.h"

Matrix::Matrix(){}

Matrix::Matrix(int height, int width)
{
    this->height = height;
    this->width = width;
    this->array = std::vector<std::vector<double>> (height, std::vector<double>(width));
}

Matrix::Matrix(std::vector<std::vector<double>> const &array)
{
    assert(array.size() != 0);
    this->height = array.size();
    this->width = array[0].size();
    this->array = array;
};

Matrix Matrix::multiply(double const &value)
{
    Matrix result(height, width);

    int i,j;

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j] = array[i][j] * value;
        }
    }

    return result;
}

Matrix Matrix::add(Matrix const &m) const
{
    assert(m.height==height && m.width==width);

    Matrix result(height, width);

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j]= array[i][j]+m.array[i][j];
        }
    }

    return result;
}

Matrix Matrix::subtract(Matrix const &m) const
{
    assert(m.height==height && m.width==width);

    Matrix result(height, width);

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j]= array[i][j]-m.array[i][j];
        }
    }

    return result;
}

Matrix Matrix::multiply(Matrix const &m) const
{
    assert(m.height==height && m.width==width);

    Matrix result(height, width);

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j]= array[i][j]*m.array[i][j];
        }
    }

    return result;
}

Matrix Matrix::dot(Matrix const &m) const
{
    assert(m.height==width);

    int mwidth = m.width;
    double w=0;

    Matrix result(height, mwidth);

    for (int i=0; i<height; i++){
        for (int j=0; j<m.width; j++){
            for (int h=0; h<width; h++){
                w+=array[i][h]*m.array[h][j];
            }
            result.array[i][j] = w;
            w=0;
        }
    }
    return result;
}





