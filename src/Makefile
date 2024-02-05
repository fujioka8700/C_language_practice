CC      = g++
CFLAGS  = -g -Wall -O2
INCLUDE	= -I ../include
TARGET  = ../bin/main
SOURCE  = main.cpp aaa.cpp bbb.cpp pointer.cpp rectangle.cpp square.cpp
OBJDIR	= ../obj
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCE:.cpp=.o))
LIBRARY = 

$(TARGET): $(OBJECTS)
	@mkdir -p $(dir $@)
	@$(CC) $^ -o $(TARGET)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: $(TARGET)

excute:
	@$(TARGET)

clean:
	@rm -rf $(OBJECTS) $(TARGET)

re: clean all excute