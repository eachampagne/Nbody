#include <iostream>
#include <vector>
#include "particleset.h"
using namespace std;

int main() {
    std::cout << "Hello, world\n";

    unsigned long int size = 10;
    std::vector<std::vector<double>> pos = {{1.0,2.0,3.0}};
    cout << pos[0][0] << "\n";
    
    ParticleSet testSet = ParticleSet::ParticleSet(size);
    testSet.test();

    return 0;
}