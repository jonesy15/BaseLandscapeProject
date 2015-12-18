#include "HelloWorldScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "Engine.h"

#include <cstdlib>
#include <ctime>

USING_NS_CC;

using namespace cocostudio::timeline;

Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();
    auto layer = HelloWorld::create();
    scene->addChild(layer);
    return scene;
}
bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }

	this->InitialiseSceneObjects();
	this->AddObjectsAsChildren();
	this->CreateEventListeners();

    return true;
}

void HelloWorld::InitialiseSceneObjects(){
	_rootNode = CSLoader::createNode("MainScene.csb");
	_playButton = _rootNode->getChildByName<cocos2d::ui::Button*>("Button_Play");
	_exitButton = _rootNode->getChildByName<cocos2d::ui::Button*>("Button_Exit");
}
void HelloWorld::AddObjectsAsChildren(){
	this->addChild(_rootNode);
	this->addChild(_playButton);
	this->addChild(_exitButton);
}
void HelloWorld::CreateEventListeners(){
	_playButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type){
		switch (type)
		{
		case cocos2d::ui::Widget::TouchEventType::BEGAN:
			break;
		case cocos2d::ui::Widget::TouchEventType::MOVED:
			break;
		case cocos2d::ui::Widget::TouchEventType::ENDED:
			Director::getInstance()->replaceScene(Engine::createScene());
			break;
		case cocos2d::ui::Widget::TouchEventType::CANCELED:
			break;
		}
	});
	_exitButton->addTouchEventListener([&](Ref* sender, cocos2d::ui::Widget::TouchEventType type){
		switch (type)
		{
		case cocos2d::ui::Widget::TouchEventType::BEGAN:
			break;
		case cocos2d::ui::Widget::TouchEventType::MOVED:
			break;
		case cocos2d::ui::Widget::TouchEventType::ENDED:
			Director::getInstance()->end();
			break;
		case cocos2d::ui::Widget::TouchEventType::CANCELED:
			break;
		}
	});
}