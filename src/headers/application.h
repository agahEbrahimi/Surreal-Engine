#pragma once
#include "camera.h"
#include "mesh.h"
#include <SDL2/SDL.h>
#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/matrix.hpp"

#include <iostream>
#include <memory>

class Application
{
    public:
        Application();
        ~Application();

        void loop();
        void drawPoint(int x, int y);
        glm::vec2 Project(glm::vec3 coord, glm::mat3 transMat);
        void Render(Camera camera, Mesh meshes[]);
    private:
        SDL_Window  *e_window;
        SDL_Event    e_window_event;
        SDL_Renderer *e_renderer;
};