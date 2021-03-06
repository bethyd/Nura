//
//  Neuron.h
//  Neural++
//
//  Created by Bethy Diakabana on 10/7/17.
//  Copyright © 2017 Bethy Diakabana. All rights reserved.
//
#pragma once
#include <vector>
#include <memory>
using namespace std;
namespace neural {
    class Neuron {
    private:
        shared_ptr<vector<double>> weights;
    public:
        Neuron(shared_ptr<vector<double>> weights);
        double weight(size_t weightIndex);
        void push_weight(double weight);
        void remove_neuron_weight(size_t weightIndex);
        void set_weights(shared_ptr<vector<double>> weights);
        double neuron_weight(size_t neuronIndex);
        double threshold();
        void set_weight(size_t weightIndex, double weight);
        void set_threshold(double weight);
        void set_neuron_weight(size_t neuronIndex, double weight);
        double output(const vector<double>& inputs);
        size_t weight_size();
        shared_ptr<vector<double>> clone_weights();
        };
}
