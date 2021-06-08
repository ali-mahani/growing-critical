/*
 * Developer: Ali Mahani
 */

#include "include/NeuralNetwork.h"
#include <iostream>


int main(void)
{
    NeuralNetwork my_system = NeuralNetwork(1, 50, 0.01, 0.001, 500, 0.01, 2.0, 0.001);
    my_system.calc_mutual_area();
    my_system.evolve(10);

    return 0;
}
