//
// Created by amar on 3/22/2018.
//
#include <assert.h>
#include <sstream>
#include <iostream>
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

    Matrix result(height, width);

    std::cout << "Width: " << result.width << std::endl;
    std::cout << "Height: " << result.height << std::endl;

    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){

            result.array[i][j]= array[i][j]-m.array[i][j];
        }
    }

    return result;
}

Matrix Matrix::multiply(Matrix const &m) const
{

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

Matrix Matrix::transpose() const
{
    Matrix result(width, height);

    for (int i=0; i<width; i++){
        for (int j=0; j<height; j++){
            result.array[i][j] = array[j][i];
        }
    }

    return result;
}

Matrix Matrix::applyFunction(double (*function)(double)) const
{
    Matrix result(height, width);
    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            result.array[i][j] = (*function)(array[i][j]);
        }
    }

    return result;
}

void Matrix::toString(std::ostream &flux) const
{
    int i,j;
    int maxLength[width] = {};
    std::stringstream ss;

    for (i=0 ; i<height ; i++)
    {
        for (j=0 ; j<width ; j++)
        {
            ss << array[i][j];
            if(maxLength[j] < ss.str().size())
            {
                maxLength[j] = ss.str().size();
            }
            ss.str(std::string());
        }
    }

    for (i=0 ; i<height ; i++)
    {
        for (j=0 ; j<width ; j++)
        {
            flux << array[i][j];
            ss << array[i][j];
            for (int k=0 ; k<maxLength[j]-ss.str().size()+1 ; k++)
            {
                flux << " ";
            }
            ss.str(std::string());
        }
        flux << std::endl;
    }
}

std::ostream& operator<<(std::ostream &flux, Matrix const &m)
{
    m.toString(flux);
    return flux;
}





