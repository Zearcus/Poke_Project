all : compile link

compile :
	g++ -c main.cpp Game/Game.cpp  -I"C:\lib\SFML-2.5.1\include" -DSFML_STATIC

link:
	g++ main.o Game.o -o main -L"C:\lib\SFML-2.5.1\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main

clean:
	rm -t main.o game.o

run:
	./main.exe
