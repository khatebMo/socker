#include "Leauge.hpp"
#include <algorithm>
#include <iostream>

League::League(const std::vector<Team>& teams) : teams(teams) {
    generateSchedule();
}

void League::generateSchedule() {
    // Generate round-robin schedule
    int numTeams = teams.size();
    int numRounds = numTeams - 1;

    for (int round = 0; round < numRounds; ++round) {
        for (int i = 0; i < numTeams / 2; ++i) {
            int homeIndex = i;
            int awayIndex = numTeams - 1 - i;

            const Team& homeTeam = teams[homeIndex];
            const Team& awayTeam = teams[awayIndex];

            schedule.push_back(Game(homeTeam, awayTeam));
        }

        // Rotate teams
        std::rotate(teams.begin() + 1, teams.end() - 1, teams.end());
    }
}

void League::playSeason() {
    for (Game& game : schedule) {
        // Play each scheduled game
        game.playGame();
        updateLeagueTable(game);
    }
}

void League::updateLeagueTable(const Game& game) {
    // Update the league table based on the game result
    // This is just a placeholder implementation

    const Team& homeTeam = game.getHomeTeam();
    const Team& awayTeam = game.getAwayTeam();
    int homeGoals = game.getHomeGoals();
    int awayGoals = game.getAwayGoals();

    // Update league table logic
}

void League::printLeagueTable() const {
    // Print the league table
    // This is just a placeholder implementation
    std::cout << "League Table:\n";
    for (const Team& team : teams) {
        std::cout << team.getName() << "\n";
        // Print team's stats from the league table
    }
}