//
// Created by amar on 3/22/2018.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "Matrix.h"

using namespace std;

Matrix X, W1, H, W2, Y, B1, B2, Y2, gradient_B1, gradient_W1, gradient_B2, gradient_W2;
double learningRate;


double random(double x)
{
    return (double)(rand() % 10000 + 1)/10000-0.5;
}

double sigmoid(double x)
{
    return 1/(1+exp(-x));
}

double sigmoidePrime(double x)
{
    return exp(-x)/(pow(1+exp(-x), 2));
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

Matrix computeOutput(vector<double> input)
{
    X = Matrix({input});
    H = X.dot(W1).add(B1).applyFunction(sigmoid);
    Y = X.dot(W2).add(B2).applyFunction(sigmoid);



    return Y;
}

void learn(vector<double> expectedOutput)
{
    Y2 = Matrix({expectedOutput});

    gradient_B2 = Y.subtract(Y2).multiply(H.dot(W2).add(B2).applyFunction(sigmoidePrime));
    gradient_B1 = gradient_B2.dot(W2.transpose()).multiply(X.dot(W1).add(B1).applyFunction(sigmoidePrime));
    gradient_W2 = H.transpose().dot(gradient_B2);
    gradient_W1 = X.transpose().dot(gradient_B1);

    W1 = W1.subtract(gradient_W1.multiply(learningRate));
    W2 = W2.subtract(gradient_W2.multiply(learningRate));
    B1 = B1.subtract(gradient_B1.multiply(learningRate));
    B2 = B2.subtract(gradient_B2.multiply(learningRate));
}

void loadTraining(vector<vector<double> > &input, vector<vector<double> > &output)
{
    int trainingSize = 946;
    input.resize(trainingSize);
    output.resize(trainingSize);

    char *filename = (char*)"/Users/amarjasarbasic/Cprojects/NN/trainingData";
    //char *filename = "C:/Users/Amar Jasarbasic/workspace/NN/trainingData";

    ifstream file(filename);

    if(file)
    {
        string line;
        int n;

        for (int i=0 ; i<trainingSize ; i++) {
            for (int h=0 ; h<32 ; h++) {
                getline(file, line);
                for (int w=0 ; w<32 ; w++) {
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

double stepFunction(double x)
{
    if(x>0.9){
        return 1.0;
    }
    if(x<0.1){
        return 0.0;
    }
    return x;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));

    double learningRate = 0.7;
    int trainingIterations = 30;

    vector<vector<double>> inputVector;
    vector<vector<double>> outputVector;

    loadTraining(inputVector, outputVector);

    init(1024, 15, 10, learningRate);

    for (int i=0; i<trainingIterations; i++){
        for (int j=0; j<inputVector.size()-10; j++){
            computeOutput(inputVector[j]);
            learn(outputVector[j]);
        }
        cout << "Iteration:" << i+1 << endl;
    }

    cout << endl << "expected output : actual output" << endl;
    for (int i=inputVector.size()-10 ; i<inputVector.size() ; i++) // testing on last 10 examples
    {
        for (int j=0 ; j<10 ; j++)
        {
            cout << outputVector[i][j] << " ";
        }
        cout << ": " << computeOutput(inputVector[i]).applyFunction(stepFunction) << endl;
    }



}








