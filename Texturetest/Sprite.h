#pragma once
#include <string>

class Sprite
{
public:
	Sprite(const std::string& file);

	int GetWidth() const;
	int GetHeight() const;

	void Bind();
};

