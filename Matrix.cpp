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

Matrix::Matrix(std::vector<std::vector<double>> const &array){
    assert(array.size() != 0);
    this->height = array.size();
    this->width = array[0].size();
    this->array = array;
};

Matrix Matrix::multiply(double const &value) {
    Matrix result(height, width);

    int i,j;

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j] = array[i][j] * value;
        }
    }
}




