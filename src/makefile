CPP_SOURCES = $(wildcard *.cpp ../entity/*.cpp ../utils/*.cpp)

LD = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image ../lib/glut32.lib -lopengl32 -lglew32 -lglu32 -lglut32

GCC = g++ -w -m32

OUT_SOURCE = -o main.exe

main:
	${GCC} ${CPP_SOURCES} ${LD} ${OUT_SOURCE}