/**
 * @file Chicken.h
 * @author Prajeeth Naliganti
 *
 * Decleration of a chicken class
 */

#ifndef STEP1__CHICKEN_H
#define STEP1__CHICKEN_H
#include <string>
#include "Animal.h"
/**
 * Class that describes a chicken.
*/
class Chicken: public Animal
{
private:
    /// The chicken's ID
    std::string mId;

public:
    /// Obtain Chicken Information
    void ObtainChickenInformation();
    /// Display animal
    void DisplayAnimal();
};

#endif //STEP1__CHICKEN_H
