#pragma once
#include "GameSetting.h"
#include "Obstacle.h"

class CTrain :public CObstacle
{
public:
	int x;
	int y;
	int speed = 2;
	int width = 20;
	int height = 3;
	OBSTACLE_TYPE Type = TRAIN;

public:
	virtual void Init(int x, int y);
	virtual void Init(int y);
	virtual void Move();
	virtual int GetX();
	virtual int GetWidth();
	virtual int GetHeight();
	virtual OBSTACLE_TYPE GetType();
public:
	CTrain();
	virtual~CTrain();
};