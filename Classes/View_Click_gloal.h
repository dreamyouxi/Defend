

#ifndef View_Click_gloal__

#define View_Click_gloal__


#include "object.h"


class View_Click_gloal/*������� ��ͼ*/
{
public:
	vector<int>tower_able;/*�����������id*/




	View_Click_gloal(Node*scene);

	void Destory();

	void updateState();/* �ⲿ���� ���¹�������*/
	bool setAllVisFalse();/*������Ѿ��ɼ�true�� û�з���false  */


private:
	MenuItemSprite* array[12][7];

	void doClickAction();/*������ ������� */


	Menu*menu_buy;
	void setBuyVisable(bool v);/*����˵�*/

	int x_now, y_now;/*��ǰindex*/
	char str[100];


	Sprite*menu_1;/*1 ��������־ bottle */
	Sprite*menu_2;/*2 ��������־  shit */
	Sprite*menu_3;/*3 ������  star  */
	Sprite*menu_4;/*4 ������  ball */
	Sprite*menu_5;/*5 ������  fan*/
	Sprite*menu_6; /* fire*/
	Sprite*menu_7;/*blue*/
	Sprite*menu_8;/*sun*/
	Sprite*menu_9;/*rock*/
	Sprite*menu_10;/* pin*/
	Sprite*menu11;/*arrow*/
	Sprite*menu12;/* snow*/
	Sprite*menu13;/*plane*/
	Sprite*menu14;/*fish*/
	Sprite*menu15;/*cuttle*/
	Sprite*menu16;/*anchor*/




};





#endif // !TowerBase


