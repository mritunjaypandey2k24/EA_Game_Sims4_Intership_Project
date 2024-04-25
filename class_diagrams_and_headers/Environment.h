#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <string>

class Season;

class Environment {
private:
    std::string treeModels;
    std::string groundTextures;
    std::string weatherEffects;

public:
    Environment();
    ~Environment();
    void updateTrees();
    void updateGroundTexture();
    void applyWeatherEffects();
};

#endif // ENVIRONMENT_H
