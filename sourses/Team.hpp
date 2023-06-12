#include<string>
using namespace std;
class Team {
private:
    string name;
    double attackLevel;
    double defenseLevel;

public:
    Team(const string& name, double attackLevel, double defenseLevel);
    string getName() const;
    double getAttackLevel() const;
    double getDefenseLevel() const;
};
