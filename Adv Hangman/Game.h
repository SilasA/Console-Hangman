#pragma once

#ifndef GAME_H
#define GAME_H

#include "New_Game.h"
#include "End_Game.h"

#include <string>

// enum class GameState { PLAYING, WIN, LOSE };

class Game
{

public:

	enum GameState { PLAYING, WIN, LOSE };

	New_Game *new_game;
	End_Game *end_game(Game *game);

	// Word to guess
	std::string mystword;
	// available letters
	char availLetters[26];
	// Hangman limbs
	char boardchar[6] = { 'O', '|', '/', '\\', '/', '\\' };
	// The users current hangman
	char currentHangman[6];
	// Wrong characters entered
	char wrongChar[6];

	// Gets the length of the mystery word
	int getLength();

	Game();
	~Game();

};

#endif /* GAME_H */