#ifndef SIM_MOOD_H
#define SIM_MOOD_H

class Season;
class SeasonalActivity;

class SimMood {
private:
    int happiness;
    int stress;
    int energy;

public:
    SimMood();
    ~SimMood();
    void increaseHappiness(int value);
    void decreaseHappiness(int value);
    void increaseStress(int value);
    void decreaseStress(int value);
    void increaseEnergy(int value);
    void decreaseEnergy(int value);
    void updateMood(Season* season);
    void updateMood(SeasonalActivity* activity);
};

#endif // SIM_MOOD_H
