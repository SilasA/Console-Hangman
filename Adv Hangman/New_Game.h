#ifndef NEW_GAME_H
#define NEW_GAME_H

#include <string>
#include <iostream>

class New_Game
{
public:

	// User instructions
	void instructions()
	{s
		std::cout << this->instruct << std::endl;
	}


	New_Game()
	{
		this->instructions();
	}

private:

	std::string instruct = "You must guess what a randomly selected word is by entering the letters in the \nword.  If you guess wrong you will receive a strike and a body part will be \nadded to the man. When the man is fully formed, you lose!\n";

};

#endif /* NEW_GAME_H */