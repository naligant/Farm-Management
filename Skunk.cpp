/**
 * @file Skunk.cpp
 * @author Prajeeth Naliganti
 *
 * Implementation of skunk
 */

#include "Skunk.h"
#include <iostream>

using namespace std;

/**
 * Obtain information from the user about this skunk.
 *
 * Asks the user for the information that describes a skunk.
 */

void Skunk::ObtainSkunkInformation()
{
    bool repeat = true;
    cout << endl;
    cout << "Input information about the Skunk \n";

    //Input statements
    cout << "Name: ";
    cin >> mName;

    while (repeat == true)
    {
        cout << "Stench Factor: ";
        cin >> stenchFactor;

        //parameters for the stench factor
        if(stenchFactor <= 0)
        {
            cout << "A skunk always has some smell, enter a number greater than 0.\n";
        }
        else if(stenchFactor > 100)
        {
            cout << "The maximum stench factor allowed is 100.\n";
        }
        else
        {
            repeat = false;
        }

    }
}


/**
 * Display information about this skunk.
 */
void Skunk::DisplayAnimal()
{
    cout << "Skunk " << mName << " has a stench factor of " << stenchFactor << " stench units.\n";
}

/**
 * Stench factor for a skunk
 */
 double Skunk::StenchStats()
 {
     return stenchFactor;
 }