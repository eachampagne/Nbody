#include <iostream>
#include <vector>
using namespace std;

#ifndef PARTICLE_H
#define PARTICLE_H

class Particle {
    public: //I assume this should be public?
        //I want to have a way to include the number of particles, but I think it's more than an 32 bit integer
        unsigned long int size;

        std::vector<std::vector<double>> pos = {};
        std::vector<std::vector<double>> vel = {};
        std::vector<std::vector<double>> acc = {};
        std::vector<double> pot = {};
        std::vector<double> mass = {};
        std::vector<unsigned long int> id = {};

        //Oh no, what if I need pointers to initialize
        //Particle(unsigned long int size, std::vector<std::vector<double>> pos, std::vector<std::vector<double>> vel, std::vector<std::vector<double>> acc, std::vector<double> pot, std::vector<double> mass, std::vector<double> id);
        
        //Fake constructor without worrying about pointers
        Particle(unsigned long int size, std::vector<std::vector<double>> position);

        void test(); //I usually write a basic test function to make certain everything's talking
};

#endif