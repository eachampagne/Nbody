#include <iostream>
#include <vector>
#include "particle.h"
using namespace std;

/**
Particle::Particle(unsigned long int size, std::vector<std::vector<double>> pos, std::vector<std::vector<double>> vel, std::vector<std::vector<double>> acc, std::vector<double> pot, std::vector<double> mass, std::vector<double> id) {
    size = size;

    //I think this will ultimately be defined by random sampling
    pos = pos;
    vel = vel;
    acc = acc;
    pot = pot;
    mass = mass;
    id = id;
}
**/

//Fake/incomplete constructor
//Can I make more than one constructor in C++? I.e. one to directly pass values, one to randomly generate from a plummer model or something?
Particle::Particle(unsigned long int size, std::vector<std::vector<double>> pos) : size(size), pos(pos){
    size = size;
    //pos = position;
    //this->pos = pos;
    //this.pos = pos;
    cout << pos[0][0] << "\n";
}

void Particle::test() {
    cout << "Particle class\n";
    cout << "Test function: ";
    cout << pos[0][0] << "\n"; //This doesn't work? Now works with this->
    //double testOut = pos[0][0];
    //cout << testOut << "\n";
    cout << "position?\n";
}
