#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "shader.h"
#include "Mesh.h"

int main(int argc, char *args[]) {
	
	Display display(900, 600, "I want to have a baby with OpenGL");

	Vertex vertices[] = {	Vertex(glm::vec3(-0.5, -0.5, 0)),
							Vertex(glm::vec3(0, 0.5, 0)),
							Vertex(glm::vec3(0.5, -0.5, 0)), };


	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));
	Shader shader("./res/basicShader");


	while (!display.IsClosed())
	{
		display.Clear(0.0f, 0.0f, 0.0f, 1.0f);
		
		shader.Bind();
		mesh.Draw();

		display.Update();

	}

	return 0;
}