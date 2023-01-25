#pragma once
#include "MainGameCharacter.h"
#include<iostream>
class CharacterDesigner
{
	static bool isNumber(std::string& s);
	static int forceNumberInput(std::string& answer);
	GameCharacterRace raceChoice();
	GameCharacterClass classChoice();
	Alignment alignmentChoice();
	void statsDistribution(MainGameCharacter& temp);
	GameCharacterRace race;
	static int selectNumber(int a, int b);

public:

	MainGameCharacter* createCharacter() {

		std::string name_t;
		std::cout << "Jak sie nazywasz" << '\n';
		std::cin >> name_t;
		Alignment all_t = alignmentChoice();
		GameCharacterRace race_t = raceChoice();
		GameCharacterClass class_t = classChoice();

		MainGameCharacter *player_t = new MainGameCharacter(name_t, race_t, class_t, 
			Statistics(10, 10, 10, 10, 10, 10), all_t, 3, 3,
			{}, 1);
		statsDistribution(*player_t);

		return player_t;

	}

};
