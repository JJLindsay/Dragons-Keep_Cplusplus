#include "hero.h"

Hero::Hero()
{
	Actor::Actor();
	Hero::score = 0;
	Hero::defenseStrength = 0;
	//Hero::createInventory = null;
	Hero::playerID = playerID;
}

Hero::Hero(string name)
{
	Actor::Actor(name);

	string loginDetails[] = { "", "", "" }; //TEMPORARY HOLD

	Hero::score = atoi(loginDetails[3].c_str);
	Hero::playerID = atoi(loginDetails[0].c_str);
	Hero::setHealth(atoi(loginDetails[4].c_str));

	if (!loginDetails[2].compare("0") == 0)
	{
		createInventory(playerID);
	}
	else
	{
		//Hero::inventory = null;
	}
}

//ON GOING...
