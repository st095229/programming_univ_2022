#pragma once

class Skill
{
protected:
	int damage;
	int recMana;
	bool applic(bool Click);
	bool reload(int key);

};

class Tornado : public Skill
{
protected:
	void length(int lengthh);
	void AreaDamage(int ragius);
};

class Sunstrike : public Skill
{
protected:
	void place(int geo);
	void AreaDamage(int ragius);
};

class Blast : public Skill
{
protected:
	void direction(int geo);
	void AreaDamage(int ellipse);
};

class GhostWalk : public Skill
{
protected:
	void action(int time);
	void speed(int val);
};

class ColdSnap : public Skill
{
protected:
	void stun(int sec);
	void countStuns(int val);
};

class AttackHand : public Skill
{
protected:
	void delay(int sec);
};

class ForgeSpirit : public Skill
{
protected:
	void countSpirits(int val);
	void timeLive(int sec);
};

class IceWall : public Skill
{
protected:
	void direct(int x, int y);
	void slowdown(int percent);
};

class EMP : public Skill
{
protected:
	void delay(int sec);
	void manaBurn(int percent);
};

class Alacrity : public Skill
{
protected:
	void duration(int sec);
	void acceleration(int percent);
};

class ChaosMeteor : public Skill
{
protected:
	void timeLive(int sec);
	void length(int lengthh);
	void direct(int x);
};

