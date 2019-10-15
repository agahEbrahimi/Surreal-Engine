#include "headers/application.h"

Application::Application()
{
    e_window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000,0);

    e_renderer = SDL_CreateRenderer(e_window, 0, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC) ;

    if(!e_window)
    {
        std::cout << "Failed to create window\n";
        std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
        return;
    }
}

Application::~Application()
{
    SDL_DestroyWindow(e_window);
}

void Application::loop()
{
    bool keep_window_open = true;
    while(keep_window_open)
    {
        while(SDL_PollEvent(&e_window_event) > 0)
        {
            switch(e_window_event.type)
            {
                case SDL_QUIT:
                    keep_window_open = false;
                    break;
            }
        }

        drawPoint(500, 500);
    }
}


glm::vec2 Project(glm::vec3 coord, glm::mat3 transMat)
{
    int point 
}

void Render(Camera camera, Mesh meshes[])
{

}

void Application::drawPoint(int x, int y)
{
    SDL_RenderClear(e_renderer);
    SDL_SetRenderDrawColor(e_renderer, 0xE9, 0x1E, 0x63, 0xFF);
    SDL_RenderDrawPoint(e_renderer, x, y);
    SDL_SetRenderDrawColor(e_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderPresent(e_renderer);

}