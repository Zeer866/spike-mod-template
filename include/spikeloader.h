#pragma once
#include <android/log.h>

// Cambia el tag en tu mod ANTES de incluir este archivo:
// #define SPIKE_TAG "MiMod"
#ifndef SPIKE_TAG
#define SPIKE_TAG "SpikeMod"
#endif

#define SPIKE_LOGI(...) __android_log_print(ANDROID_LOG_INFO, SPIKE_TAG, __VA_ARGS__)
#define SPIKE_LOGE(...) __android_log_print(ANDROID_LOG_ERROR, SPIKE_TAG, __VA_ARGS__)

// Paquete del juego y carpeta de Spike Loader
#define SPIKE_GAME_PACKAGE "com.robtopx.geometryjump"
#define SPIKE_MEDIA_DIR "/storage/emulated/0/Android/media/" SPIKE_GAME_PACKAGE "/spikeloader"

// Funcion que Spike Loader llama al cargar tu mod
#define SPIKE_MOD_INIT() extern "C" __attribute__((visibility("default"))) void spike_mod_init()
