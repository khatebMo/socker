#include "Team.hpp"

Team::Team(const string &name, double attackLevel, double defenseLevel)
    : name(name), attackLevel(attackLevel), defenseLevel(defenseLevel)
{
}

string Team::getName() const
{
    return name;
}

double Team::getAttackLevel() const
{
    return attackLevel;
}

double Team::getDefenseLevel() const
{
    return defenseLevel;
}