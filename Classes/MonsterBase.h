#ifndef MonsterBase__

#define MonsterBase__

#include "object.h"



class MonsterBase
{
public:
	int hp;/*Ѫ��*/
	int hp_now;/**/
	float moveSpeed;/* Խ��Խ�������ƶ��ٶ�*/
	float moveSpeed_readOnly;
	int money;
	int moveDir=8;
	int damage;

	virtual void initBase() {};
	void setHP(int h);

	~MonsterBase()
	{
		//log("~~~~MonsterBase");
	}
};




#endif // !MonsterBase__


