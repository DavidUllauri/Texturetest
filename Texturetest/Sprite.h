#pragma once
#include <string>

class Sprite
{
public:
	Sprite(const std::string& file);
	int GetWidth() const;
	int GetHeight() const;
	unsigned int GetVAO() const;
	void Bind();
private:
	unsigned int mVBO;
	unsigned int mVAO;
	unsigned int mEBO;
	unsigned int mTexture;
	int mWidth{ 0 };
	int mHeight{ 0 };
};

