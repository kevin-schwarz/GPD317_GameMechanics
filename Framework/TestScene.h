#pragma once

#include "Scene.h"

class SDL_Surface;

class TestScene : public Scene
{

public:
	TestScene();
	virtual ~TestScene();

	virtual void render() override;

	virtual void load(Uint32 _rmask, Uint32 _gmask, Uint32 _bmask, Uint32 _amask) override;
	virtual void unload() override;

private:
	SDL_Surface* m_pLink;

};