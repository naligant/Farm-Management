/**
 * @file Skunk.h
 * @author Prajeeth Naliganti
 *
 * Class that describes a skunk
 */

#ifndef STEP1__SKUNK_H
#define STEP1__SKUNK_H

#include <string>
#include "Animal.h"

/**
 * @class Skunk
 * class that describes a skunk
 */
class Skunk: public Animal
{
private:
    /// skunks name
    std::string mName;

    ///stench factor
    double stenchFactor;

public:
    /// Obtain skunk information
    void ObtainSkunkInformation();
    /// Display animal
    void DisplayAnimal();
    /**
     * gather stench stats
     * @return average skunk stench
     */
    double StenchStats();

};

#endif //STEP1__SKUNK_H
