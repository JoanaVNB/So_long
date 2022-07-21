NAME		= so_long
CC			= clang
CFLAGS		= -Wall -Wextra -Werror

LIBFT	= libft.a
IFT		= -Ilibft -Llibft -lft
IMLX	= -Imlx -Lmlx -lmlx -lXext -lX11

SRCS	= so_long.c init_map.c check_map.c init_game.c	hooks.c \
				render_map.c input.c clean_all.c 

OBJSDIR	= obj
OBJS	= $(addprefix ${OBJSDIR}/, ${SRCS:%.c=%.o})
B_OBJS	= $(addprefix ${OBJSDIR}/, ${B_SRCS:%.c=%.o})

all: ${NAME}
bonus: ${NAME}_bonus

${NAME}: ${OBJSDIR} ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${IFT} ${IMLX} -o $@

${OBJSDIR}:
	mkdir -p $@

${OBJS}: | ${LIBFT} ${MLX}
${B_OBJS}: | ${LIBFT} ${MLX}

${OBJSDIR}/%.o: src/%.c src/so_long.h 
	${CC} ${CFLAGS} -c $< -o $@

run:
	./$(NAME) maps/1map.ber

valgrind:
	valgrind --leak-check=full ./so_long maps/1map.ber

${LIBFT}: | libft
	${MAKE} -C libft/

clean:
	${MAKE} clean -C libft
	rm -rf ${OBJSDIR}
	
fclean: clean
	rm -rf ${NAME}

re: fclean all