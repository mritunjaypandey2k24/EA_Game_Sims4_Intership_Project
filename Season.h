#ifndef SEASON_H
#define SEASON_H

#include <string>

class Environment;

class Season {
protected:
    std::string name;
    // Add properties for weather conditions, vegetation state, etc.

public:
    Season(std::string name);
    virtual ~Season();
    virtual void updateEnvironment(Environment* environment) = 0;
};

class Spring : public Season {
public:
    Spring();
    ~Spring();
    void updateEnvironment(Environment* environment);
};

class Summer : public Season {
public:
    Summer();
    ~Summer();
    void updateEnvironment(Environment* environment);
};

class Fall : public Season {
public:
    Fall();
    ~Fall();
    void updateEnvironment(Environment* environment);
};

class Winter : public Season {
public:
    Winter();
    ~Winter();
    void updateEnvironment(Environment* environment);
};

#endif // SEASON_H
