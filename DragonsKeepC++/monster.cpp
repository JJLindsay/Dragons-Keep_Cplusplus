#include "monster.h"
#include "Actor.cpp"

Monster::Monster()
{
	Actor::Actor();
	string dbMonster[] = {"", "", ""}; //TEMPORARY HOLDER
	Actor::setName(dbMonster[0].c_str());
	Actor::setAttackPower(atoi(dbMonster[1].c_str()));
	Actor::setHealth(atoi(dbMonster[2].c_str()));
}