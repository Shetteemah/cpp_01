# TARGET = harlFilter
# CXX = c++
# CXXFLAGS = -Wall -Wextra -Werror -std=c++98
# INCLUDES = -I include

# SRCDIR = src
# INCDIR = include
# OBJDIR = obj

# SOURCES = $(wildcard $(SRCDIR)/*.cpp)
# OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))


# .PHONY: all clean

# all: $(TARGET)

# $(TARGET): $(OBJECTS)
# 	$(CXX) $^ -o $@

# $(OBJDIR)/%.o: $(SRCDIR)/%.cpp
# 	@mkdir -p $(@D)
# 	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# clean:
# 	$(RM) -r $(OBJDIR)

# fclean: clean
# 	$(RM) -r $(OBJDIR) $(TARGET)

# re: fclean all

# .PHONY: all clean fclean re

CC = c++
CFLAGS =  -std=c++98

SRCDIR = src
INCDIR = -I include
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))

EXECUTABLE = harlFilter

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -f $(OBJ) $(EXECUTABLE)
	rm -rf $(OBJDIR)
