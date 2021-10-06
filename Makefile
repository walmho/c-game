SOURCE_FILES=$(wildcard src/*.cpp) #Searches directory for all c++ files
OBJECT_FILES=$(patsubst src/%.cpp, bin/%.o, $(SOURCE_FILES))

CC=g++
CCFLAGS= -Iinclude
LDFLAGS= #Link options - currently none

all: $(SOURCE_FILES) link #What to do when u type make

.PHONY: $(SOURCE_FILES)
$(SOURCE_FILES):
	$(CC) $(CCFLAGS) $@ -o $(patsubst src/%.cpp, bin/%.o, $@) -c

link:
	$(CC) $(LDFLAGS) $(OBJECT_FILES) -o main.exe 
	