##
## Makefile for header in /Users/olivie_a/Desktop/Easter
## 
## Made by OLIVIER Steven
## Login   <olivie_a@etna-alternance.net>
## 
## Started on  Wed May  4 16:03:24 2016 OLIVIER Steven
## Last update Wed May  4 16:03:27 2016 OLIVIER Steven
##
CC	= gcc
NAME	= Forza
SRC	=	fonction1.c\
		Easter.c\
		fonction2.c\
		fonction3.c\
		fonction4.c\
		move.c


OBJ	= $(SRC:%.c=%.o)
RM	= rm -f
CFLAGS	+= -W -Wall -Werror -ansi

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME) *~ 

re:	fclean all