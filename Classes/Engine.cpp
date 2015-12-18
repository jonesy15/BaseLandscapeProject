#include "Engine.h"

Scene* Engine::createScene()
{
	auto scene = Scene::create();
	auto layer = Engine::create();
	scene->addChild(layer);
	return scene;
}
bool Engine::init()
{
	if (!Layer::init())
		return false;

	this->scheduleUpdate();
	return true;
}
void Engine::update(float elapsedTime)
{

}

// Dev-made Logic