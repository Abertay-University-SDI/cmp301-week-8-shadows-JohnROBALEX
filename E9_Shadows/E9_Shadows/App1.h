// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "TextureShader.h"
#include "ShadowShader.h"
#include "DepthShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void depthPass();
	void finalPass();
	void gui();

private:
	TextureShader* textureShader;
	PlaneMesh* mesh;

	Light* light;
	AModel* model;
	ShadowShader* shadowShader;
	DepthShader* depthShader;
	OrthoMesh* orthoMesh;
	ShadowMap* shadowMap;
	RenderTexture* renderTexture;
	Camera* secondCamera;
	CubeMesh* cubeMesh;
	SphereMesh* sphereMesh;

	float rotation;
	float lightDirectionX = 0.0f;
	float lightDirectionY = -0.7f;
	float lightDirectionZ = 0.7f;

	float lightPositionX = 0.f;
	float lightPositionY = 0.f;
	float lightPositionZ = -10.f;
};

#endif