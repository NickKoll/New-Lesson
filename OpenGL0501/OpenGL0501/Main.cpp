#include <Windows.h>
#include <gl/GL.h>

#include <iostream>
#include <string>
#include <SDL.h>

bool isAppRunning = true;
SDL_Window* window = nullptr;
SDL_GLContext context = nullptr;

int main(int argc, char* argv[])
{

	if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
	{
		std::cout << "SDL did not initialize properly." << std::endl;
		return 0;
	}

	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY);

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 5);

	window = SDL_CreateWindow("Graphics engine",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1280, 720,
		SDL_WINDOW_OPENGL);

	if (!window)
	{
		std::cout << "Error creating program window" << std::endl;
		return 0;
	}

	context = SDL_GL_CreateContext(window);

	if (!context)
	{
		std::cout << "Error creating OpenGL context. Time to get a new graphics card." << std::endl;
		return 0;
	}

	//=====================================================================

	while (isAppRunning)
	{

		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_QUADS);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.5f, 0.5f, 0.0f);

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.5f, 0.5f, 0.0f);

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex3f(0.5f, -0.5f, 0.0f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(-0.5f, -0.5f, 0.0f);

		glEnd();

		SDL_GL_SwapWindow(window);
	}


	//=====================================================================

	SDL_GL_DeleteContext(context);
	SDL_DestroyWindow(window);
	SDL_Quit();

	system("pause");
	return 0;
}