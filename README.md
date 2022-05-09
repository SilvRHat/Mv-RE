# Multi_verse: RE(Rendering Engine)
## VERSION 2.1.1
Gavin Zimmerman


## Multi_verse:RE //
 Mv:RE is an engine for rendering multi-styled 3D scenes for games, animations, and 3D builds. The engine provides two core pieces: a set of structures for building such projects and a rendering pipeline for drawing them. 


## Usage //
 Mv:RE was developed for those who wish to work closely to OpenGL with additional logic for scene/world/objects- programming. Provided with the rendering engine are additional files which compile into an example program [Makefile, main.c/h, camera.c/h, scene.c/h], this provides developers the files to start and become familiar with the engine's framework.
 Please note, that those example files are developed in a developer's context and are NOT suitable for any production environment due to lack of cross-platform testing and security considerations (namely the ability to rebuild a program while running the previous context hitting b).


## Examples //
 Here I provide examples of this framework's usage in both code and visuals, so that any developers who would like to approach it may reference such design.
 - [Gr@v:f/UX](https://github.com/SilvRHat/gr-v-f-UX)<br>
 <img src='doc/gravity_flux.png' width='50%'>


## Dependencies //
 - OpenGL 4.1+
 - glfw3
 - MacOS X / Linux [LIMITED TESTING] / Windows [UNTESTED]
 - gcc


## Files //
 - README
 - camera.h / camera.c
    - Camera logic
 - scene.h / scene.c
    - Simple Cube Scene decription
 - main.h / main.c
    - OpenGL Window Context / Plug-in
 - Makefile
    - Source Compilation
 
 - MvRE.h
    - Multi_verse:RE Header / Sources dependencies
 - graphics.h
    - Graphics dependencies
 - linmath.h
    - Linear Algebra math library
 - signal.h / signal.c
    - Signal instance for dynamic event-programming
 - utils.h / utils.c
    - Additional utility functions including sorting
 - objects.h / objects.c
    - Multi_verse:RE Instances and packaged rendering objects
 - render.h / render.c
    - Multi_verse:RE Rendering Pipeline


## License //
 This engine is Open Source and uses a GPL License, similar to Blender. 