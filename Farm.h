
/**
 * @file Farm.h
 *
 * @author Prajeeth Naliganti
 *
 * Class that describes a Farm.
 *
 * This class holds a collection of animals that make
 * up the inventory of a farm.
 */

#ifndef STEP1__FARM_H
#define STEP1__FARM_H
#include<vector>
#include "Cow.h"

/**
 * Class that describes a farm.
 *
 * Holds a collection of animals that make up the farm
 * inventory.
 */

class Farm
{
private:
    /// A list with the inventory of all animals on the farm
    std::vector<Animal *> mInventory;
public:
    /// Adding animals to inventory
    void AddAnimal(Animal *animal);
    /// Displaying the inventory
    void DisplayInventory();
    /// Displaying the stench stats of the farm
    void DisplayStenchStats();
    /// destructor
    ~Farm();

};

#endif //STEP1__FARM_H
