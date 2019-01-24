#pragma once
#include "../EventManager/ISubscriber.h"


class InputManager : public ISubscriber
{
public:

	InputManager();

	// Inherited via ISubscriber
	virtual void Notify(EventName eventName, Param * params) override;
};