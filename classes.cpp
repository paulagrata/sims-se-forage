#ifndef HOUSEHOLD_MEMBER_UI_H
#define HOUSEHOLD_MEMBER_UI_H

#include <vector>
#include <string>

// Forward declarations
class Resources;
class Actions;

class HouseholdMemberUI {
private:
    std::string currentView;
    Resources* containedResources;
    Actions* actions;

public:
    HouseholdMemberUI();
    ~HouseholdMemberUI();
    void collect();
    void act();
};

class Resources {
private:
    std::vector<std::string> householdSims;
    std::vector<std::string> householdAnimals;

public:
    Resources();
    ~Resources();
    void collect();
};

class Actions {
private:
    std::string toggleView;

public:
    Actions();
    ~Actions();
    void act();
};

class UIButton {
public:
    UIButton();
    ~UIButton();
    void act();
};

class ChangeView {
public:
    ChangeView();
    ~ChangeView();
    void act();
};

class ShowSimMood {
public:
    ShowSimMood();
    ~ShowSimMood();
    void act();
};

#endif /* HOUSEHOLD_MEMBER_UI_H */
