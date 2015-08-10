#ifndef _BALL_H
#define _BALL_H

#include "cocos2d.h"
#include "slider.h"
#include "Brick.h"
USING_NS_CC;

class Ball : public Sprite 
{
private:
	Vec2 _direction;//С����
	Vec2 _location; //С��λ��
	int _speed;//С���ٶ�
	float _radius;//С��뾶
	Size _visibleSize; //��Ļ�ߴ�
	//static Vector<Ball*>* balls;
public:
	Ball();
	~Ball();
	void set_location(Vec2 position);
	//����С����
	void set_direction(Vec2 direction);
	Vec2 get_direction();
	//����С���ٶ�
	void set_speed(int speed);
	int get_speed();
	//С���ƶ�
	void BallMove();
	//��߽磬���壬ש�����ײ
	bool collideWithSlider(Slider* slider);
	bool collideWithEdges();
	void collideWithBricks(Brick* brick);
	bool isCollideWithBrick(Brick* brick);
	virtual bool init();
	CREATE_FUNC(Ball);

};
#endif