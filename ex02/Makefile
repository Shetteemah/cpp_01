CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = brain
SOURCES = src/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)


all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re