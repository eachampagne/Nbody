#include <iostream>
#include <vector>
using namespace std;

#ifndef PARTICLESET_H
#define PARTICLESET_H

class ParticleSet {
    public:
        unsigned long int size;

        std::vector<std::vector<double>> pos;
        std::vector<std::vector<double>> vel = {};
        std::vector<std::vector<double>> acc = {};
        std::vector<double> pot = {};
        std::vector<double> mass = {};
        std::vector<unsigned long int> id = {};

        ParticleSet(unsigned long int size);

        void test();
};

#endif