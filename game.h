#ifndef GAME_H
#define GAME_H

#include "irrlicht.h"

class Game
{
public:
    Game();
    void run();

private:
    void init();
    void update();
    void render();
    void processEvents();

private:
    irr::IrrlichtDevice* device;
    irr::video::IVideoDriver* driver;
    irr::scene::ISceneManager* sceneManager;
    irr::gui::IGUIEnvironment* guiEnvironment;
};

#endif // GAME_H
