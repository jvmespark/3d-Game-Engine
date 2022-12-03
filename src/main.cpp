#include <iostream>
#include <string>

#include "windows.h"
#include "../common/common_headers.h"
#include "GL/glut.h"

#include "../entity/player.h"

#include "../utils/shader.h"
#include "../utils/camera.h"
#include "../utils/window.h"
#include "../utils/renderer.h"

#define STB_IMAGE_IMPLEMENTATION
#include "../lib/stb_image.h"

int main(int argc, char** argv) {
    
    float width = 1920/2;
    float height = 1080/2;

    Window window("Engine", width, height);
    window.init();

    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            quit = window.Handle_Window_Events(e);
        }

        render(window);
    }
}