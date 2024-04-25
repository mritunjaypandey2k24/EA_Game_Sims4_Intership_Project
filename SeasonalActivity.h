#ifndef SEASONAL_ACTIVITY_H
#define SEASONAL_ACTIVITY_H

#include <string>

class SimMood;

class SeasonalActivity {
protected:
    std::string activities;
    std::string seasonAffected;

public:
    SeasonalActivity();
    virtual ~SeasonalActivity();
    virtual void startActivity() = 0;
    virtual void performActivity() = 0;
    virtual void completeActivity() = 0;
};

class WinterActivity : public SeasonalActivity {
public:
    WinterActivity();
    ~WinterActivity();
    void startActivity();
    void performActivity();
    void completeActivity();
};

class SpringActivity : public SeasonalActivity {
public:
    SpringActivity();
    ~SpringActivity();
    void startActivity();
    void performActivity();
    void completeActivity();
};

class SummerActivity : public SeasonalActivity {
public:
    SummerActivity();
    ~SummerActivity();
    void startActivity();
    void performActivity();
    void completeActivity();
};

class FallActivity : public SeasonalActivity {
public:
    FallActivity();
    ~FallActivity();
    void startActivity();
    void performActivity();
    void completeActivity();
};

#endif // SEASONAL_ACTIVITY_H
