// public
saten_sprite* saten_resource_sprite(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.sprite_n) {
        saten_errhandler(41);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.sprite[id];
}

// public
Mix_Chunk* saten_resource_sfx(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.sfx_n) {
        saten_errhandler(42);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.sfx[id];
}

// public
Mix_Music* saten_resource_bgm(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.bgm_n) {
        saten_errhandler(43);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.bgm[id];
}

// public
saten_text* saten_resource_text(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.text_n) {
        saten_errhandler(44);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.text[id];
}