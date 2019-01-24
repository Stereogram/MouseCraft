#include "InputManager.h"
#include "InputParams.h"
#include "../EventManager/EventManager.h"


InputManager::InputManager()
{
	EventManager::Subscribe(JOYSTICK, this);
	EventManager::Subscribe(BUTTON_UP, this);
	EventManager::Subscribe(BUTTON_DOWN, this);
}

void InputManager::Notify(EventName eventName, Param* params)
{
	switch (eventName)
	{
	case JOYSTICK:
		TypeParam<InputParams*>* p = static_cast<TypeParam<InputParams*>*> (params);
		Vec2d test = p->Param->Joystick;

		break;
	case BUTTON_DOWN:
		TypeParam<InputParams*>* p = static_cast<TypeParam<InputParams*>*> (params);
		char test = p->Param->button;

		break;
	case BUTTON_UP:
		TypeParam<InputParams*>* p = static_cast<TypeParam<InputParams*>*> (params);
		char test = p->Param->button;

		break;
	default:
		break;
	}
}
