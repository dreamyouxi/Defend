#include "Scene_4_6.h"



#include "Bonus_4_1.h"
#include "Bonus_4_2.h"
#include "Bonus_4_3.h"
#include "Bonus_4_4.h"
#include "Bonus_4_5.h"
#include "Bonus_4_6.h"
#include "Bonus_4_7.h"



Scene* Scene_4_6::createScene()
{
	auto scene = Scene::create();
	auto layer = Scene_4_6::create();
	scene->addChild(layer);
	return scene;
}



void Scene_4_6::initQueue_way()
{

	
	queue_way.push(Vec2(0, 1));
	queue_way.push(Vec2(1, 1));

	queue_way.push(Vec2(1, 2));
	queue_way.push(Vec2(1, 3));
	queue_way.push(Vec2(1, 4));
	queue_way.push(Vec2(1, 5));


	queue_way.push(Vec2(2, 5));
	queue_way.push(Vec2(3, 5));
	queue_way.push(Vec2(3, 4));
	queue_way.push(Vec2(3, 3));
	queue_way.push(Vec2(3, 2));
	queue_way.push(Vec2(3, 1));

	queue_way.push(Vec2(4, 1));


	queue_way.push(Vec2(4, 2));
	queue_way.push(Vec2(4,3));

	queue_way.push(Vec2(5, 3));
	queue_way.push(Vec2(6, 3));
	queue_way.push(Vec2(7, 3));



	queue_way.push(Vec2(7, 2));
	queue_way.push(Vec2(7, 1));
	queue_way.push(Vec2(8, 1));

	queue_way.push(Vec2(8, 2));
	queue_way.push(Vec2(8,3));
	queue_way.push(Vec2(8, 4));
	queue_way.push(Vec2(8, 5));


	queue_way.push(Vec2(9, 5));
	queue_way.push(Vec2(10, 5));



	queue_way.push(Vec2(10, 4));
	queue_way.push(Vec2(10, 3));
	queue_way.push(Vec2(10, 2));
	queue_way.push(Vec2(10, 1));
	queue_way.push(Vec2(11, 1));


	data->push_back(Vec2(4, 0));
	data->push_back(Vec2(5, 0));
	data->push_back(Vec2(6, 0));
	data->push_back(Vec2(7, 0));
	data->push_back(Vec2(8, 0));

}


void Scene_4_6::initAbleTower()
{
	view_click_gloal->tower_able.push_back(16);
	view_click_gloal->tower_able.push_back(14);
	view_click_gloal->tower_able.push_back(5);

}

void Scene_4_6::initBonus()
{
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(0, 6)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(2, 6)));
	monster_queue.push_back(new  Bonus_4_3(this, PublicFunc::convertToPoint(3, 6)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(4, 6)));
	monster_queue.push_back(new  Bonus_4_4(this, PublicFunc::convertToPoint(5, 6)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(7, 6)));
	monster_queue.push_back(new  Bonus_4_3(this, PublicFunc::convertToPoint(8, 6)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(9, 6)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(11, 6)));


	monster_queue.push_back(new  Bonus_4_1(this, PublicFunc::convertToPoint(0, 5)));
	monster_queue.push_back(new  Bonus_4_1(this, PublicFunc::convertToPoint(11, 5)));


	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(0, 4)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(2, 4)));
	monster_queue.push_back(new  Bonus_4_7(this, PublicFunc::convertToPoint(4, 4)));
	monster_queue.push_back(new  Bonus_4_7(this, PublicFunc::convertToPoint(6, 4)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(9, 4)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(11, 4)));

	monster_queue.push_back(new  Bonus_4_3(this, PublicFunc::convertToPoint(0, 3)));
	monster_queue.push_back(new  Bonus_4_3(this, PublicFunc::convertToPoint(9, 3)));
	monster_queue.push_back(new  Bonus_4_3(this, PublicFunc::convertToPoint(11, 3)));

	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(2, 2)));
	monster_queue.push_back(new  Bonus_4_5(this, PublicFunc::convertToPoint(5, 2)));
	monster_queue.push_back(new  Bonus_4_2(this, PublicFunc::convertToPoint(9, 2)));

	monster_queue.push_back(new  Bonus_4_5(this, PublicFunc::convertToPoint(1, 0)));
	monster_queue.push_back(new  Bonus_4_5(this, PublicFunc::convertToPoint(9, 0)));




}

