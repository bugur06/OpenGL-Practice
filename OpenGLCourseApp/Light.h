#pragma once

#include <GL/glew.h>
#include <glm/glm/glm.hpp>

class Light
{
public:
	Light();
	Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity,
		GLfloat xDir, GLfloat yDir, GLfloat zDir, GLfloat dIntensity);


	void useLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation,
					GLfloat diffuseIntensityLocation, GLfloat directionLocation);

	~Light();
private:
	glm::vec3 colour;
	GLfloat ambientIntensity;

	glm::vec3 direction;
	GLfloat diffuseLighting;
	GLfloat diffuseIntensity;
};

