#pragma once

#include <string>
#include <GL/glew.h>
#include "transform.h"
 
class Shader
{
public:
	Shader(const std::string& fileName);

	void Bind();

	virtual ~Shader();
protected:
private:
	static const unsigned int NUM_SHADERS = 2;
	Shader(const Shader& other) {}
	void operator=(const Shader& shader) {}


	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];

};
