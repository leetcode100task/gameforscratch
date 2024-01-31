#include<stdio.h>
#include<stdbool.h>
#include<glad/glad.h>
#define SDL_MAIN_HANDLED
#include<SDL2/SDL.h>
int main(int argc, char*argv[]){
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	puts("Hello");
	return 0;
	
}