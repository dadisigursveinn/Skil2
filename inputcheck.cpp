#include "inputcheck.h"
#include <string>
#include <iostream>

using namespace std;

inputcheck::inputcheck()
{

}

/*
 * Checks if name includes numbers
 */
bool inputcheck::nameCheck(const string &name)
{
    return !(name.find_first_of("0123456789") != string::npos);
}

/*
 * Checks if input is F, M, f or m
 */
bool inputcheck::genderCheck(char gender)
{
    if(gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F')
        return true;
    else
        return false;
}

bool inputcheck::birthCheck(int& birth)
{
    if(birth < 0 || birth > 2016 || birth == isdigit(birth))
        return false;
    else
        return true;
}

bool inputcheck::deathCheck(int death, int& birth)
{
    if(death > 2016 || death < 0 || (death < birth && death != 0) || death == isdigit(death))
        return false;
    else
        return true;
}

/*
 * Check if there is a comma in the input
 */
bool inputcheck::commaCheck(string word)
{
    if(word.find(',')!=std::string::npos)
        return true;
    else
        return false;
}

/*
 * Chec if answer is either y/Y or n/N
 */
bool inputcheck::answerCheck(char answer)
{
    if(answer == 'y' || answer == 'Y' || answer == 'n' || answer == 'N')
        return true;
    else
        return false;
}

