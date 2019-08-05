#ifndef SATURN_ENGINE_SCENE
#define SATURN_ENGINE_SCENE

saten_scene_info saten_scene_create(saten_scene_info info,
        saten_fptr_void init, saten_fptr_bool update, saten_fptr_void draw,
        saten_fptr_void quit, char *loadscriptfp);
void saten_scene_quit(saten_scene_info scene);
void saten_scene_init_done(saten_scene_info scene);
void saten_scene_load_done(saten_scene_info scene);
bool saten_scene_initialized(saten_scene_info scene);
bool saten_scene_loaded(saten_scene_info scene);
bool saten_scene_is_quitting(saten_scene_info scene);
uint64_t saten_scene_frame(saten_scene_info scene);
saten_scene_info saten_scene_get_current(void);
saten_scene_info saten_scene_get_previous(void);
saten_scene_info saten_scene_set_start(saten_scene_info scene);
saten_scene_info saten_scene_destroy(saten_scene_info scene);
bool saten_scene_exists(saten_scene_info scene);

#endif /* SATURN_ENGINE_SCENE */
