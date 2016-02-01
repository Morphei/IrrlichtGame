#include "iostream"

#include "game.h"
#include "irrlicht.h"

using namespace irr;

using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

char ROOT [] = "/home/morphei/QtProjects/IrrlichtTest/resources/";

Game::Game()
{
    device = createDevice(video::EDT_OPENGL, dimension2d<u32>(1024, 768), 32, false, false, false, 0);

    if (!device)
    {
        device->drop();
    }
    else
    {
        device->setWindowCaption(L"Demo Irrlicht Game");
        driver = device->getVideoDriver();
        sceneManager = device->getSceneManager();
        guiEnvironment = device->getGUIEnvironment();
        //run();
    }
}

void Game::run()
{
    IAnimatedMesh* mesh = sceneManager->getMesh(strcat(ROOT, "sydney.md2"));
    if (!mesh)
        device->drop();

    IAnimatedMeshSceneNode* node = sceneManager->addAnimatedMeshSceneNode(mesh);

    node->setMaterialFlag(EMF_LIGHTING, false);

    node->setMD2Animation(scene::EMAT_RUN);

    node->setMaterialTexture( 0, driver->getTexture("/home/morphei/QtProjects/IrrlichtTest/resources/sydney.bmp"));

    sceneManager->addCameraSceneNodeFPS();//0, vector3df(0,30,-40),vector3df(0,5,0));
    device->getCursorControl()->setVisible(false);


    while (device->run()) {
        driver->beginScene(true, true, SColor(255,100,101,140));

        sceneManager->drawAll();
        guiEnvironment->drawAll();

        driver->endScene();
    }

    device->drop();
}

void Game::init()
{
    IAnimatedMesh* mesh = sceneManager->getMesh(strcat(ROOT, "sydney.md2"));
    if (!mesh)
        device->drop();

    IAnimatedMeshSceneNode* node = sceneManager->addAnimatedMeshSceneNode(mesh);

    node->setMaterialFlag(EMF_LIGHTING, false);

    node->setMD2Animation(scene::EMAT_RUN);

    node->setMaterialTexture( 0, driver->getTexture("/home/morphei/QtProjects/IrrlichtTest/resources/sydney.bmp"));

    sceneManager->addCameraSceneNode(0, vector3df(0,30,-40),vector3df(0,5,0));
}

void Game::update()
{

}

void Game::render()
{
    driver->beginScene(true, true, SColor(255,100,101,140));

    sceneManager->drawAll();
    guiEnvironment->drawAll();

    driver->endScene();
}

void Game::processEvents()
{

}

