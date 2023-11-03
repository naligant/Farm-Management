/**
 * @file Chicken.cpp
 * @author Prajeeth Naliganti
 *
 * Implementation of chicken
 */

#include <iostream>
#include "Chicken.h"

using namespace std;


/**
 * Obtain a chicken description from the user.
 */
void Chicken::ObtainChickenInformation()
{
    cout << endl;
    cout << "Input information about the chicken" << endl;

    // Obtain the ID. This is easy, since it's just a
    // string.
    cout << "Id: ";
    cin >> mId;
}

/**
 * Display the chicken.
 */
void Chicken::DisplayAnimal()
{
    cout << "Chicken: " << mId << endl;
}
