TARGET = main
NAME = libA.a
SRCS = aaa.c bbb.c ccc.c
OBJS = $(SRCS:.c=.o)
CC = g++
CFLAG = 
INC = 
LIB = 

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	ranlib $(NAME)
	$(CC) -o $(TARGET) main.c -L. -lA
	./$(TARGET)
	
all: $(NAME)

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TARGET)

re: fclean all