#ifndef WEATHER_SYSTEM_H
#define WEATHER_SYSTEM_H

class Season;

class WeatherSystem {
public:
    WeatherSystem();
    ~WeatherSystem();
    void simulateRain();
    void simulateSnow();
    void updateCloudCover();
};

#endif // WEATHER_SYSTEM_H
