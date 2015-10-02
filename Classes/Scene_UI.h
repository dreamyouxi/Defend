#ifndef Scene_UI__
#define Scene_UI__

#include "object.h"



#include "Monster_UI.h"
#include "Tower_UI.h"

#include "Monster_land_pink.h"
#include "Tower_Bottle.h"
#include "View_king.h"
#include "View_Click_gloal.h"
#include "View_Up_Menu.h"
#include "Bonus_UI.h"

#include "Wave_Manager.h"



class Scene_UI :public Layer
{
public:
	friend class Wave_Manager;


	void Destroy();

	string key_to_;/*�ؿ����ڶ�ȡ���� �ؿ��ɾ�*/




	DatePos_Array*data;/*ռλ ��������*/

	vector<Monster_UI*>monster_queue;/*����*/
	vector<Tower_UI*>tower_queue;/*����*/
	View_king *view_king;/* �ܲ�*/
	View_Click_gloal*view_click_gloal;/*�û���� ��������*/
	View_Up_Menu*view_up_menu;/*�Ϸ��˵�*/



	virtual void update(float delta);

	MenuItemSprite*bg;/*��������*/


	queue<Vec2> queue_way;/*·��*/



	bool init();
	int current_level;/*��ǰ����*/


	std::function<void(void)> callback_next;
	std::function<void(void)> callback_restart;

	Wave_Manager *wave_manager;


	virtual void removeRes()/*�Ƴ��ó�����Դ*/
	{

	}
	void BonusAllclear();

private:
	void loadSceneWay();
	/*����ʱ*/
	Menu*x;
	Sprite*sp_count;
	Sprite*sp_count_1;
	Sprite*sp_count_2;

	vector <Sprite*>queue_f;

	
protected:
	int base_money;/*����������Ǯ*/

	Sprite*sp_bonus_clear;

	virtual void initQueue_way() = 0;/* ��ʼ������·��*/
	virtual void initAbleTower() = 0;/*����������� ����ID*/
	virtual void initBonus() = 0;
	virtual void initScene(Node*p)
	{
		/*��ʼ������ͼƬ , ·��ͼƬ, ��Ǯ*/
		//while (true);
	}

	virtual void initWave_manager();/*��ʼ�� ����*/
};




















#endif 
