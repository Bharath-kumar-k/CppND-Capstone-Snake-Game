#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "snake.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  void Render(Snake const snake,Snake const l_snake, SDL_Point const &food, std::vector<SDL_Point> const &obstruction);
  void UpdateWindowTitle(int score, int fps);
  void UpdateWindowTitle(int score, int size, int fps); // Overloading UpdateWindowTitle 
  void UpdateWindowTitle(int level, int score, int size, int fps); // Overloading UpdateWindowTitle 

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif