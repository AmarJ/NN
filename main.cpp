//
// Created by amar on 3/22/2018.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "Matrix.h"

using namespace std;

Matrix X, W1, H, W2, Y, B1, B2, Y2, dJdB1, dJdW1, dJdB2, dJdW2;
double learningRate;

int main() {
    return 0;
}
double random(double x)
{
    return (double)(rand() % 10000 + 1)/10000-0.5;
}

void init(int inputNeuron, int hiddenNeuron, int outputNeuron, double rate)
{
    learningRate = rate;

    W1 = Matrix(inputNeuron, hiddenNeuron);
    W2 = Matrix(hiddenNeuron, outputNeuron);
    B1 = Matrix(1, hiddenNeuron);
    B2 = Matrix(1, outputNeuron);

    W1 = W1.applyFunction(random);
    W2 = W2.applyFunction(random);
    B1 = B1.applyFunction(random);
    B2 = B2.applyFunction(random);

}

void loadTraining(const char *filename, vector<vector<double> > &input, vector<vector<double> > &output)
{
    int trainingSize = 946;
    input.resize(trainingSize);
    output.resize(trainingSize);

    ifstream (file);
    if (file){
        string line;
        int n;

        for (int i=0; i<trainingSize; i++){
            for (int h=0; h<32; h++){
                getline(file, line);
                for (int w=0l w<32; w++){
                    input[i].push_back(atoi(line.substr(w,1).c_str()));
                }
            }
            getline(file, line);
            output[i].resize(10);
            n = atoi(line.substr(0,1).c_str());
            output[i][n] = 1;
        }
    }
    file.close();
}








