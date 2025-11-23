# Kompilator
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Källfiler
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# Output-program
TARGET = kassa

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Kör programmet
run: $(TARGET)
	./$(TARGET)

# Ta bort byggfiler
clean:
	rm -f $(OBJ) $(TARGET)
