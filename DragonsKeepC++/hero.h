#include "actor.cpp"
using namespace std;

class Hero:Actor
{
private:
	int playerID;
	int score;
	int defenseStrength;
	//Inventory inventory;

public:
	Hero();
	Hero(string heroName);
	void createInventory();
	void createInventory(int playerId);
	//Inventory getInventory();
	int getScore();
	void setScore(int aScore);
	int getDefenseStrength();
	void setDefenseStrength(int aDefenseStrength);
	int getPlayerId();
	void setPlayerId(int aPlayerId);
	//static AcotorDB getActorDB();
};