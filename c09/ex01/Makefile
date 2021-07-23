NAME := lift.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror -c
SRC_DIR := ./srcs/
SRC_FILES := ft_putchar.c \
			ft_putstr.c \
			ft_srtcmp.c \
			ft_strlen.c \
			ft_swap.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(SRC_FILES))
HEADER := -I includes/
LIBC := ar rc
LIBR := rankin
RM := rm -f

All: obj $(NAME)

Obj: $(SRCS)

$(SRC_DIR)%.O: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(LIBS) $(NAME) $(OBJS)
	$(LIBS) $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
Re: fclean all

.PHONY: all clean clean re

#norm :
#	norminette -R CheckForbiddenSourceHeader */*.[ch]