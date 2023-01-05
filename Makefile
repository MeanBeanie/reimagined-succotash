CC = g++
PROJECT_FILES = src/*.cpp
PROJECT_NAME = warsim
CFLAGS = -std=c++20 -o $(PROJECT_NAME) -Wswitch
INCLUDE_PATH = /opt/homebrew/Cellar/sfml/2.5.1_2/include
LIBS = -L/opt/homebrew/Cellar/sfml/2.5.1_2/lib -lsfml-window -lsfml-graphics -lsfml-system

make:
	$(CC) $(PROJECT_FILES) $(CFLAGS) -I$(INCLUDE_PATH) $(LIBS)