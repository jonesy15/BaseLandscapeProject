#ifndef __ENGINE_H__
#define __ENGINE_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

using namespace cocos2d;

class Engine : public Layer
{
public:
	CREATE_FUNC(Engine);
	static Scene* createScene();
	virtual bool init();
	void update(float elapsedTime);
private:
};

#endif