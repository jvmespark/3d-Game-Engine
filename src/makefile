CPP_SOURCES = $(wildcard *.cpp ../entity/*.cpp ../utils/*.cpp)

LD = -lmingw32 -lSDL2main SDL2.dll -lSDL2_image glut32.lib -lopengl32 -lglew32 -lglu32 -lglut32

GCC = g++ -w -m32

OUT_SOURCE = main.exe

main:
	${GCC} ${CPP_SOURCES} ${LD} -o ${OUT_SOURCE}

run: 
	${GCC} ${CPP_SOURCES} ${LD} -o ${OUT_SOURCE}
	./${OUT_SOURCE}