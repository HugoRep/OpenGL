#pragma once

#include <iostream>




class WindowApp
{
public:
	WindowApp();
	~WindowApp();

public:
	int Init();
	void render(double currentTime);
};

