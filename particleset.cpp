#include <iostream>
#include <vector>
#include "particleset.h"
using namespace std;

ParticleSet::ParticleSet(unsigned long int size) {
    size = size;
    std::vector<double> zeroVec = {0.0,0.0,0.0};

    //Initialize zero vectors
    std::vector<std::vector<double>> initPos(size, zeroVec);
    std::vector<std::vector<double>> initVel(size, zeroVec);
    std::vector<std::vector<double>> initAcc(size, zeroVec);
    std::vector<double> initPot(size, 0.0);
    std::vector<double> initMass(size, 0.0);
    std::vector<unsigned long int> initID(size, 0);    
    
    //Copy zero vectors to class attributes (afaik there's no more elegant way to do this, don't have convenient numpy functions :/)
    pos = initPos;  
    vel = initVel;    
    acc = initAcc;    
    pot = initPot;
    mass = initMass;    
    id = initID;

    cout << pos[0][0] << " " << pos[0][1] << " " << pos[0][2] << "\n";
    cout << pos[1][0] << " " << pos[1][1] << " " << pos[1][2] << "\n";

    pos[1] = {1.0,2.0,3.0};
    vel[1] = {4.0,5.0,6.0};
    acc[1] = {7.0,8.0,9.0};

    cout << pos[0][0] << " " << pos[0][1] << " " << pos[0][2] << "\n";
    cout << pos[1][0] << " " << pos[1][1] << " " << pos[1][2] << "\n";
}

void ParticleSet::test() {
    cout << "Particle set test\n";
    cout << pos[0][0] << " " << pos[0][1] << " " << pos[0][2] << "\n";
    cout << pos[1][0] << " " << pos[1][1] << " " << pos[1][2] << "\n";

    cout << vel[0][0] << " " << vel[0][1] << " " << vel[0][2] << "\n";
    cout << vel[1][0] << " " << vel[1][1] << " " << vel[1][2] << "\n";

    cout << acc[0][0] << " " << acc[0][1] << " " << acc[0][2] << "\n";
    cout << acc[1][0] << " " << acc[1][1] << " " << acc[1][2] << "\n";

    cout << pot[0] << " " << mass[0] << " " << id[0] << "\n";

}
