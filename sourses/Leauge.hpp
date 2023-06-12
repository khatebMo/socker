#include "Game.hpp"
#include <vector>

class League {
private:
    vector<Team> teams;
    vector<Game> schedule;

public:
    League(const vector<Team>& teams);
    void generateSchedule();
    void playSeason();
    void printLeagueTable() const;

private:
    void updateLeagueTable(const Game& game);
};