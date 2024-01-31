set files=src\glad.c src\main.c
set libs=G:\MyGame\lib\SDL2main.lib G:\MyGame\lib\SDL2.lib
CL /Zi /I G:\MyGame\include %files% /link %libs% /OUT:mygame.exe