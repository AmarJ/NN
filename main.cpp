//
// Created by amar on 3/22/2018.
//
#include <iostream>
#include <vector>
#include <fstream>
#include "Matrix.h"

Matrix X, W1, H, W2, Y, B1, Y2, dJdB1, dJdW1, dJdB2, dJdW2;
double learningRate;

int main() {
    return 0;
}

void loadTraining(const char *filename, std::vector<std::vector<double> > &input, std::vector<std::vector<double> > &output)
{
    int trainingSize = 946;
    input.resize(trainingSize);
    output.resize(trainingSize);

    std::ifstream (file);
    if (file){
        std::string line;
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






