#ifndef Wave_Manager__
#define Wave_Manager__

#include "object.h"

class Scene_UI;



class Each_One
{
public:
	int type;/*����*/
	int hp;/*Ѫ��*/
	Each_One(int type, int hp)
	{
		this->type = type;
		this->hp = hp;
	}
	Each_One(){}

	void operator=(Each_One  &tmp)
	{
		this->type = tmp.type;
		this->hp = tmp.hp;
	}




};/*ÿһ����������*/




class Wave_Manager
{
public:
	Each_One array[30][10];/*���30����ÿ�����10������*/

	void sync();/*ˢ�½ӿ�  ��monster_queue ����*/

	void push_back(int wave, Each_One each,bool is=false);/*��ʼ�� ��ӹ���*/
	
	void Destory()
	{
		action->removeFromParentAndCleanup(true);
		delete this;
	}

	Each_One& getDataByIndex(int wave, int no)
	{
		return array[wave][no];

	}


	Wave_Manager(Scene_UI*);



	Sprite*action;
	void runWave(int wave);

	int max_wave_index;
	int current_wave_index;
private:
	bool isDone_this_wave;
	int i_run;
	bool is_music;


	int current_monster_index;
	int max_monster_index[30];

	int count;
	Scene_UI*scene;
};




#endif 
