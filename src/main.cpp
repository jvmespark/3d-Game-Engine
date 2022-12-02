#include <iostream>
#include <string>

#include "windows.h"
#include "../common/common_headers.h"
#include "GL/glut.h"

#include "../entity/player.h"

#include "../utils/shader.h"
#include "../utils/camera.h"
#include "../utils/window.h"

#define STB_IMAGE_IMPLEMENTATION
#include "../lib/stb_image.h"

int main(int argc, char** argv) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout<<"ERROR: SDL INIT VIDEO"<<std::endl;
        exit(1);
    }
    
    Window window("Engine", 1920/2, 1080/2);
    window.init();

    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            quit = window.Handle_Window_Events(e);
        }
    }
}