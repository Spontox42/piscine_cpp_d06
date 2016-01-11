##
## Makefile for piscine_cpp_d06 in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex00
## 
## Made by marlon petit
## Login   <petit_x@epitech.net>
## 
## Started on  Mon Jan 11 15:39:59 2016 marlon petit
## Last update Mon Jan 11 16:24:14 2016 marlon petit
##

NAME	= my_convert_temp

SRC	= main.cpp

OBJ	= $(SRC:.cpp=.o)

CC	= g++

RM	=rm -f

CFLAGS	= -Wextra -Werror -Wall

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ)

fclean	:clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
