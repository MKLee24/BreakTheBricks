#ifndef _GAMESCENE_01_H
#define _GAMESCENE_01_H

#include "cocos2d.h"
#include "slider.h"
#include "Ball.h"
#include "Brick.h"


class GameScene_01 : public cocos2d::LayerColor
{
private:
	Size visibleSize;
	Vec2 _direction;
	Slider* slider; //����
	Vector<Ball*>* balls; //С�����
	Vector <Brick*>* bricks; //ש�����
private:
	Sprite* breakBtn; //��ͣ��ť
	
public:
	//�˵�
	void menuPause(Ref* pSender);
	//�����ͣ��ť��С�򣬻��飬ש�鵽����
	void createMenu();
	void createSlider();
	void createBall();
	void creatBricks();
	//�������С��
	void addBall();

public:
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
	virtual void update(float delta); //update������ÿ֡����
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene_01);
};

#endif 
