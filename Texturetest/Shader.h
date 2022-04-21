#pragma once

#include <string>

class Shader
{
public:
	Shader(const char* vertexPath, const char* fragmentPath);
	void UploadUniformInt3(const std::string& name, int xval, int yval, int zval);
	void UploadUniformInt2(const std::string& name, int xval, int yval);
	void use();

	void setInt(const std::string& name, int value) const;

	unsigned int ID;
private:
	std::string ReadFile(const std::string& filepath);

	void checkCompileErrors(unsigned int shader, std::string type);
};

