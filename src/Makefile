CC = g++
CFLAGS = -g -Wall -O2
INCLUDE	= -I ../include
TARGET = ../bin/main
SOURCE = main.cpp aaa.cpp
OBJDIR	= ../obj
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCE:.cpp=.o))
LIB = 

$(TARGET) : $(OBJECTS)
	mkdir -p $(dir $@)
	$(CC) $^ -o $(TARGET)

$(OBJDIR)/%.o : %.cpp
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all	: $(TARGET)

clean			:
	rm -rf $(OBJECTS) $(TARGET)

re: clean all