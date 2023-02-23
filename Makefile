CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
AR		= ar r
RM		= rm -f
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
LIBNAME	= libft.h

all:	$(NAME)
$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re