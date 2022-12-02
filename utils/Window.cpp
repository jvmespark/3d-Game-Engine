#include "Window.h"

Window screen;

Window::Window() {
    window = NULL;
    SCRN_TITLE = "";
    SCRN_WIDTH = 0;
    SCRN_HEIGHT = 0;
}

void Window::init() {
    window = SDL_CreateWindow( SCRN_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCRN_WIDTH, SCRN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE );
    if (!window) {
        std::cout<<"ERROR: SDL Window"<<std::endl;
        exit(1);
    }
}
bool Window::Handle_Window_Events(SDL_Event& e) {
    bool mFullScreen = false;
    if (e.type == SDL_WINDOWEVENT) {
        switch(e.window.event) {

        }
    }
    else if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_RETURN ) {
        if( mFullScreen ) {
            SDL_SetWindowFullscreen( window, SDL_FALSE );
            mFullScreen = false;
        }
        else {
            SDL_SetWindowFullscreen( window, SDL_TRUE );
            mFullScreen = true;
            //mMinimized = false;
        }
    }
    else if (e.type == SDL_QUIT) {
        return true;
    }
    return false;
}