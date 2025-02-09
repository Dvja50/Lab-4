CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp Race.cpp Horse.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = horse_race

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

run: $(EXEC)
	./$(EXEC)

debug: $(EXEC)
	gdb ./$(EXEC)

