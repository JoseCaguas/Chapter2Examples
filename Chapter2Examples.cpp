/* Chapter2Examples.cpp 
* Programer: Jose Torres
* Class: CSC.221.30W
* Due Date: Jan 24,2025
* Requirements:  Write a program that has the following character variables: first, middle, and last. Store your initials in these
variables then display them on the screen.
*/

#include <iostream>

int main()
{
    char firstinitial;
    char middleinitial;
    char lastinitial;

    std::cout << "Please enter the initial of your first name: ";
    std::cin >> firstinitial;
    std::cout << "Please enter the initial of your middle name: ";
    std::cin >> middleinitial;
    std::cout << "Please enter the initial of your last name: ";
    std::cin >> lastinitial;
    std::cout << "Your initials are: " <<firstinitial<<middleinitial<<lastinitial;
}

