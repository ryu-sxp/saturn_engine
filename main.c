/*
  Saturn Engine - Demo game
*/

#include "lib/saturn_engine.h"

/*
typedef struct _scenemngr {
    saten_scene *root; // root scene that loads all assets shared by scenes
    saten_scene *title;
    saten_scene *settings;
} scenemngr;
*/


typedef struct _scenemngr { // index 0: uid, index 1: position id
    saten_scene_info root;
    saten_scene_info title;
    saten_scene_info title_menu; // subscenes may use assets from prev scene
    saten_scene_info title_menu_settings;
    saten_scene_info game;
} scenemngr;

// Declarations
void scene_root_init(void);
void scene_root_update(bool c);
void scene_root_draw(void);
void scene_root_quit(void);
scenemngr scene = { 0 };

int main (int argc, char *argv[])
{
    // Engine initialization
    if (saten_init("saturn_engine_demo", 320, 240, SATEN_MRBLOAD) < 0)
        fprintf(stderr, "Init error...\n");
    // Setting up unique IDs for scenes //TODO let a function handle this?
    scene.root.uid = 0;
    scene.title.uid = 1;
    scene.title_menu.uid = 2;
    scene.title_menu_settings.uid = 3;
    // Create root scene
    scene.root = saten_scene_create(scene.root, scene_root_init,
            scene_root_update, scene_root_draw, scene_root_quit);
    // Run the game loop
    saten_run();

    return 0;
}

void scene_root_init(void)
{
    scene.game.uid = 4;
    // load global resouces (menu soundeffects, load screen stuff)
    saten_load_resources(scene.root, "script/load_resources.rb");
    saten_scene_initialized(scene.root);
}
void scene_root_update(bool c)
{
}
void scene_root_draw(void)
{
}
void scene_root_quit(void)
{
}
