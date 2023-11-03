/**
 * @file Farm.cpp
 *
 * @author Prajeeth Naliganti
 *
 * implementation of farm
 */

#include "Farm.h"
#include <iostream>

using namespace std;

/** Add an animal to the farm inventory.
 *
 * @param animal A animal to add to the inventory
 */
void Farm::AddAnimal(Animal *animal)
{
    mInventory.push_back(animal);
}

/**
 * Display the farm inventory.
 */
void Farm::DisplayInventory()
{
    for (auto animal : mInventory)
    {
        animal->DisplayAnimal();
    }
}
/**
 * Display the stench factor in farm.
 */
 void Farm::DisplayStenchStats()
{
     double average = 0.0;
     for (auto animal : mInventory)
     {
         average += animal->StenchStats();
     }
     average /= mInventory.size();
     cout << "There are " << mInventory.size() << " stinky animals on the farm.\n";
     cout << "The average stench level is " << average << " stench units.\n";

}

/**
 * Farm destructor
 */
Farm::~Farm()
{
    // Iterate over all of the animals, destroying
    // each one.
    for (auto animal : mInventory)
    {
        delete animal;
    }

    // And clear the list
    mInventory.clear();
}