//
// Created by ashok on 3/17/16.
//

#include "evaluation.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    //double targets[][] = {{1, 1, 0, 0, 0, 0}, {0, 0, 1, 1, 0, 0}, {0, 0, 0, 0, 1, 1}};
    //Mat targets = (Mat_<double(3,6)<<1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1);
    //double outputs[][] = {{0.1, 0.86, 0.2, 0.1, .02, 0.1}, {0.4, 0.12, 0.768, 0.145, 0.1, 0.8}, {0.454, 0.35, 0.21, 0.0, 0.89, 0.9999}};
    //Mat outputs=(Mat_<double>(3,6)<<0.1, 0.86, 0.2, 0.1, .02, 0.1, 0.4, 0.12, 0.768, 0.145, 0.1, 0.8, 0.454, 0.35, 0.21, 0.0, 0.89, 0.9999);
    vector<vector<double> > targets;
    vector<double> row;
    row.push_back(1);
    row.push_back(1);
    row.push_back(0);
    row.push_back(0);
    row.push_back(0);
    row.push_back(0);
    targets.push_back(row);

    row.clear();
    row.push_back(0);
    row.push_back(0);
    row.push_back(1);
    row.push_back(1);
    row.push_back(0);
    row.push_back(0);
    targets.push_back(row);

    row.clear();
    row.push_back(0);
    row.push_back(0);
    row.push_back(0);
    row.push_back(0);
    row.push_back(1);
    row.push_back(1);
    targets.push_back(row);

    vector<vector<double> > outputs;
    row.clear();
    row.push_back(0.1);
    row.push_back(0.86);
    row.push_back(0.2);
    row.push_back(0.1);
    row.push_back(0.02);
    row.push_back(0.1);
    outputs.push_back(row);

    row.clear();
    row.push_back(0.4);
    row.push_back(0.12);
    row.push_back(0.768);
    row.push_back(0.145);
    row.push_back(0.1);
    row.push_back(0.8);
    outputs.push_back(row);

    row.clear();
    row.push_back(0.454);
    row.push_back(0.35);
    row.push_back(0.21);
    row.push_back(0.0);
    row.push_back(0.89);
    row.push_back(0.99999);
    outputs.push_back(row);

    Confusion confusion = Confusion(targets, outputs);
    confusion.print();

    Evaluation evaluation = Evaluation(confusion);
    evaluation.print();

    return 0;
}