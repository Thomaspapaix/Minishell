##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

SRC=	src/minishell.c	\
		src/tools.c

OBJ =	$(SRC:.c=.o)

COMPIL =	-L ./library/lib/my -lmy

BINARY =	mysh

all:	$(BINARY)

$(BINARY):	$(OBJ)
	$(MAKE) -C ./library/lib/my
	gcc -o $(BINARY) $(OBJ) $(COMPIL)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(BINARY)
	$(MAKE) -C ./library/lib/my fclean

re:	fclean all