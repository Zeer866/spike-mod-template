#define SPIKE_TAG "MiMod"
#include "spikeloader.h"
#include <cstdio>

SPIKE_MOD_INIT() {
    SPIKE_LOGI("Mi mod se cargo correctamente");

    // Ejemplo: escribir un archivo para comprobar que funciona
    FILE* f = fopen(SPIKE_MEDIA_DIR "/mimod.txt", "w");
    if (f) {
        fputs("Hola desde mi mod\n", f);
        fclose(f);
    }
}
