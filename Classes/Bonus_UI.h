
#ifndef Bonus_UI__

#define Bonus_UI__


#include "Monster_UI.h"




/*Bonus ��������λ�����½�*/
class Bonus_UI :public Monster_UI
{
public:

	Bonus_UI(){};

	vector<Vec2> queue_takeplace_pos;/*ռ�õ�����*/


	virtual void Destory(bool isKing = false);/*��� �ӿ�*/

	virtual void updateWay(){ 111; }

	virtual	void set_effect_slow(int lev, int tag = 1){};/*����Ч��*/
	virtual void set_effect_slow_Blue(int lev){};/* ���Ǽ���Ч��*/
	virtual	void set_effect_pause_fish(int lev){};/*fish ��ͣ*/
	virtual void set_effect_pause(int lev){};/*��ͣ*/

	virtual void playEffect(){}

};




#endif // 


