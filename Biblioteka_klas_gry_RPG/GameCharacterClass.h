#pragma once
#include <string>
#include <vector>

#include "Ability.h"

class GameCharacterClass
{
	ClassType classType;
	std::vector<Ability*> abilities;

public:
	GameCharacterClass(ClassType classType, std::vector<Ability*> abilities);
	std::string getName();
	ClassType getClassType();
	Ability* getAbility(int index);
	std::string getAbilities();
};

