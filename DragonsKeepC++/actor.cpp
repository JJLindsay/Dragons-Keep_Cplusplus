#include "actor.h"

Actor::Actor():
name(""), health(0), attackPower(0)
{
}

Actor::Actor(string aName):
name(aName), health(0), attackPower(0)
{
}

Actor::Actor(string aName, int aHealth, int attackPower):
name(aName), health(aHealth), attackPower(attackPower)
{
}

void Actor::setAttackPower(int attackPower)
{
	attackPower = attackPower;	
}

void Actor::setHealth(int aHealth)
{
	health = aHealth;
}

void Actor::setName(string aName)
{
	name = aName;
}

int Actor::getAttackPower()
{
	return attackPower;
}

int Actor::getHealth()
{
	return health;
}

string Actor::getName()
{
	return name;
}