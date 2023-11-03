/**
 * @file Cow.h
 * @author Prajeeth Naliganti
 *
 * Class that describes a cow
 */

#ifndef STEP1__COW_H
#define STEP1__COW_H

#include <string>
#include "Animal.h"
/**
 * @class Cow
 * class that describes a cow
 */
class Cow: public Animal
{
private:
    /// the types of cow we can have on our farm
    enum class Type {Bull, BeefCow, MilkCow};

    /// The cow's name
    std::string mName;

    /// The type of cow: Bull, BeefCow, or MilkCow
    Type mType = Type::MilkCow;

    /// The milk production for a cow in gallons per day
    double mMilkProduction = 0;

public:
    /// Obtain cow information
    void ObtainCowInformation();
    /// Display animal
    void DisplayAnimal();
    /**
     * gather stench stats
     * @return average cow stench
     */
    double StenchStats();


};

#endif //STEP1__COW_H
