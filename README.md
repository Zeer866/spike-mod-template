# Plantilla de mod para Spike Loader

Plantilla para crear mods de Geometry Dash (Android) para [Spike Loader](https://github.com/Zeer866/spike-loader).

## Cómo usarla
1. Toca **Use this template** > **Create a new repository**
2. Abre `CMakeLists.txt` y cambia `MOD_NAME` por el nombre de tu mod
3. Programa tu mod en `src/mod.cpp`, dentro de `SPIKE_MOD_INIT()`
4. Haz commit: GitHub Actions compila solo
5. En **Actions**, abre la última ejecución y descarga **mod-compilado** (zip)
6. Del zip saca `arm64-v8a/lib<TuMod>.so` (sirve para casi todos los celulares)
7. Cópialo a `Android/media/com.robtopx.geometryjump/spikeloader/mods/`
8. Abre Geometry Dash

## Importante
- Estos mods funcionan solo con Spike Loader. No sirven con Geode.
- Spike Loader está en alfa. Por ahora un mod puede ejecutar código, pero todavía no hay hooks para interceptar funciones del juego.
