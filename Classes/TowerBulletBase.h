
#ifndef TowerBulletBase__

#define TowerBulletBase__

#include "object.h"

class TowerBulletBase
{
public:
	float moveSpeed;/*Խ��Խ��*/
	int damage;
	int level;
	virtual void initTowerBulletBase(int lev) = 0;


};



#endif // !TowerBase


