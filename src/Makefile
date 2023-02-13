CXXFLAGS  = -O3 -m64
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

FILES = $(wildcard *.cpp)
FILES_OBJ = $(FILES:.cpp=.o)

all: compile
	$(CXX) $(FILES_OBJ) -o trigon.exe $(CXXFLAGS)

compile: $(FILES_OBJ)

deps:
	$(CXX) -MM $(FILES) > Makefile.files

include Makefile.files
