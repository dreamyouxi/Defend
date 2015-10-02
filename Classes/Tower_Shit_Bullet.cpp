#include "Tower_Shit_Bullet.h"
#include "PublicFunc.h"

Tower_Shit_Bullet::Tower_Shit_Bullet(int lev, Node*p, float rotation, Vec2 pos_tower, Vec2 pos)/*scene ,����ĳ��tower ��Ŀ��λ��*/
{

	isDone = false;


	string str = "";



	switch (lev)
	{
	case 1:
	{
			  str = "PShit1";


	}break;
	case 2:
	{
			  str = "PShit2";
	}break;
	case 3:
	{
			  str = "PShit3";
	}break;
	}


	initTowerBulletBase(lev);


	sprite = Sprite::createWithSpriteFrameName("PShit11.png");
	p->addChild(sprite);

	sprite->setRotation(rotation);
	sprite->setPosition(pos_tower);





	sprite;;

	auto ani = Animation::create();
	ani->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(str + "1.png"));
	ani->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(str + "2.png"));
	//ani->addSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(str + "3.png"));


	ani->setDelayPerUnit(3.0 / 30.0);
	ani->setRestoreOriginalFrame(false);
	ani->setLoops(-1);

	auto an = Animate::create(ani);
	sprite->runAction(an);

	sprite->runAction(MoveTo::create(
		PublicFunc::cacl_distance(pos,  pos_tower) / moveSpeed
		, pos
		));

	sprite->runAction(Sequence::create(

		DelayTime::create(PublicFunc::cacl_distance(pos, pos_tower) / moveSpeed)
		, CallFunc::create([=]
	{

		isDone = true;

	}), nullptr
		));


}





void Tower_Shit_Bullet::initTowerBulletBase(int lev)
{

	moveSpeed = 1000;
	switch (lev)
	{
	case 1: damage = 1; break;
	case 2: damage = 3; break;
	case 3: damage = 5; break;
	}
}


