#ifndef SEASON_MANAGER_H
#define SEASON_MANAGER_H

#include <string>

class Season;

class SeasonManager {
private:
    Season* currentSeason;
    int seasonLength;

public:
    SeasonManager();
    ~SeasonManager();
    void advanceToNextSeason();
    void updateEnvironment();
};

#endif // SEASON_MANAGER_H
