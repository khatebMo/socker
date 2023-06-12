#include "Team.hpp"

class Game {
private:
    Team homeTeam;
    Team awayTeam;
    int homeGoals;
    int awayGoals;

public:
    Game(const Team& homeTeam, const Team& awayTeam);
    void playGame();
    Team getHomeTeam()const;
    Team getAwayTeam()const;
    int getHomeGoals()const;
    int getAwayGoals()const;

private:
    void generateGoals();
};