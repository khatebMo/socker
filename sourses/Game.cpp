#include "Game.hpp"
#include <random>

Game::Game(const Team &homeTeam, const Team &awayTeam)
    : homeTeam(homeTeam), awayTeam(awayTeam)
{
    playGame();
}

void Game::playGame()
{
    generateGoals();
    // Perform other game-related logic
}

void Game::generateGoals()
{
    // Generate random number of goals for each team based on their attack and defense levels
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<double> dist(0, 1);

    double homeAttack = homeTeam.getAttackLevel();
    double homeDefense = homeTeam.getDefenseLevel();
    double awayAttack = awayTeam.getAttackLevel();
    double awayDefense = awayTeam.getDefenseLevel();

    // Calculate the number of goals using the attack and defense levels
    homeGoals = static_cast<int>(dist(gen) * homeAttack - dist(gen) * awayDefense);
    awayGoals = static_cast<int>(dist(gen) * awayAttack - dist(gen) * homeDefense);

    // Ensure non-negative number of goals
    homeGoals = max(homeGoals, 0);
    awayGoals = max(awayGoals, 0);
}
Team Game::getHomeTeam()const
{
    return homeTeam;
}
Team Game::getAwayTeam()const
{
    return awayTeam;
}

int Game::getAwayGoals()const
{
    return this->awayGoals;
}
int Game::getHomeGoals()const
{
    return this->homeGoals;
}
