#pragma once

#include <GL/glew.h>
#include "stb_image.h"

#define STB_IMAGE_IMPLEMENTATION

class Texture
{
public:
	Texture();
	Texture(char* fileLoc);

	void LoadTexture();
	void UseTexture();
	void Cleartexture();

	~Texture();

private:
	GLuint textureID;
	int width, height, bitDepth;

	char* fileLocation;
};

