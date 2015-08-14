#ifndef BRICK_H
#define BRICK_H

#include "cocos2d.h"

USING_NS_CC;

typedef enum {
	NORMAL,UP_SPEED,DOWN_SPEED,ADD_LENGTH,SUB_LENGTH,ADD_BALL
} brickIndex;
class Brick : public Sprite
{
private:
	//brickIndex ballBf; //С��buff
	//bool addBall; //����С��
public:
	/*void set_BallBf(brickIndex index); //ש��ı�С���ٶȵ�buff
	brickIndex get_BallBf(); //�õ�С���ٶȸı䷽��
	*/
	CC_SYNTHESIZE(brickIndex,Bf,Bf);
	/*void set_AddBall(bool m); //�����Ƿ�����С��
	bool get_AddBall(); //�õ��Ƿ�����С��
	*/
	CC_SYNTHESIZE(bool,addBall,addBall);
	Rect getRect();
	virtual bool init();
	void setBrickBuff(brickIndex index);
	CREATE_FUNC(Brick);
};
#endif