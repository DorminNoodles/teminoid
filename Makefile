NAME = terminoid
SRCS =			main.c

CC = clang



all : $(NAME)

$(NAME) :
	$(CC) $(SRCS) -o build/$(NAME)
