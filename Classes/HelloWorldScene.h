#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(HelloWorld);

private:
	cocos2d::ui::Button* _playButton;
	cocos2d::ui::Button* _exitButton;
	cocos2d::Node*		_rootNode;

	void InitialiseSceneObjects();
	void AddObjectsAsChildren();
	void CreateEventListeners();
};

#endif // __HELLOWORLD_SCENE_H__
