#ifndef TowerBase__

#define TowerBase__

#include "object.h"
#include"SimpleAudioEngine.h"

#include "View_Click_Tower.h"


using namespace CocosDenshion;

class TowerBase
{
public:
	int level;/*�ȼ� 123*/
	int attackRange;/*�����뾶*/
	float attackSpeed;/*�����ٶ�  ԽСԽ��*/
	virtual void initTowerBase() = 0;/**/
	virtual void setLevel(int lev) = 0;



};


#endif // !TowerBase


