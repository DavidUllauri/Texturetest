#pragma once

#include <string>

class Shader
{
public:
	Shader(const std::string& vertexFile, const std::string& fragmentFile);
	void UploadUniformInt3(const std::string& name, int xval, int yval, int zval);
	void UploadUniformInt2(const std::string& name, int xval, int yval);
	void Bind();

private:
	unsigned int mShaderProgram;
	std::string ReadFile(const std::string& filepath);
};

