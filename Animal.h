/**
 * @file Animal.h
 * @author Prajeeth Naliganti
 *
 * Class that holds information about each animal
 */

#ifndef STEP1__ANIMAL_H
#define STEP1__ANIMAL_H
/**
 * @class Animal
 * class that describes an animal
 */
class Animal
{
private:

public:
    /// Destructor for Animals
    virtual ~Animal();
    /** Display an animal. */
    virtual void DisplayAnimal() {}
    /**
     * gather stench stats
     * @return average stench
     */
    virtual double StenchStats() { return 0; }

};

#endif //STEP1__ANIMAL_H
