#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char** argv)
{
	// try to initialize SDL2
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "could not initialize SDL2: "
			<< SDL_GetError() << std::endl;
		return 1;
	}

	// create window of size 640 x 480
	const int width = 640;
	const int height = 480;
	SDL_Window* window = SDL_CreateWindow("helloWorld",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		width, height, SDL_WINDOW_SHOWN);
	if (window == nullptr)
	{
		std::cerr << "could not create window: "
			<< SDL_GetError() << std::endl;
		return 1;
	}

	// access canvas in window
	SDL_Surface* surface = SDL_GetWindowSurface(window);
	if (surface == nullptr)
	{
		std::cerr << "could not get surface: "
		<< SDL_GetError() << std::endl;
		return 1;
	}

	// fill with white color
	SDL_FillRect(surface, nullptr,
		SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
	
	// draw a small green rectangle in center
	SDL_Rect rect;
	rect.x = width/2 - 16;
	rect.y = height/2 - 16;
	rect.w = rect.h = 32;
SDL_FillRect(surface, &rect,
SDL_MapRGB(surface->format, 0x00, 0xFF, 0x00));
// show the resulting surface and wait 5s
SDL_UpdateWindowSurface(window);
SDL_Delay(5000);
// destroy window and quit SDL2
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}
