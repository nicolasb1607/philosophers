CC		= gcc
CFLAGS	= -Wall -Wextra -g3 
#-Werror
EXEC	= philo

LIBFT 	= ./libft/

INCLUDES		= ./includes/

SRCS	=	./main.c				\
			./srcs/check_args.c		\
			./srcs/launch_prgm.c	\
			./srcs/routine.c		\
			./srcs/time.c			\
			./srcs/init.c			\


OBJS = ${SRCS:.c=.o}

all : MAKELIBFT $(EXEC)

MAKEPRINTF : 
	make -C $(PRINTF)

MAKELIBFT : 
	make -C $(LIBFT)

$(EXEC) : $(OBJS)
	$(CC) $(CFLAGS) -L $(LIBFT) $^ -o $(EXEC) -I $(INCLUDES) -I $(LIBFT) -lft -pthread

.c.o :
	$(CC) $(CFLAGS) -L $(LIBFT) -c $^ -o $@ -I $(INCLUDES) -I $(LIBFT) -lft -pthread

clean :
	rm -rf $(OBJS)
	make clean -C $(LIBFT)

fclean : clean
	rm -rf $(EXEC)
	make fclean -C $(LIBFT)

re : fclean all

.PHONY : all clean fclean re 