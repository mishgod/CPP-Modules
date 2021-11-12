NAME		=	book

CC			=	clang++

OBJS_DIR	=	.obj

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	=	$(shell ls | grep ".cpp")

OBJS	= $(addprefix $(OBJS_DIR)/, $(patsubst %.cpp, %.o, $(SRCS)))


$(OBJS_DIR)/%.o:	%.cpp
					@test -d $(OBJS_DIR) || mkdir $(OBJS_DIR)
					@$(CC) $(FLAGS) -c $< -o $@

RM		=	rm -rf

$(NAME): ${OBJS}
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		@printf "$(GREEN)$(BOLD)Compilation completed$(NO_COLOR)\n"

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)
		@printf "$(UNDER_LINE)$(BOLD)$(NAME):$(NO_COLOR) $(CYAN)All files deleted$(NO_COLOR)\n"

re:		fclean all

run:	all
		./$(NAME)

.PHONY:	all clean fclean re run

################
##   COLORS   ##
################

BOLD	 	= \033[1m
NO_COLOR 	= \033[0m
UNDER_LINE	= \033[4m

BLACK	 	= \033[0;30m
RED 	 	= \033[0;31m
GREEN 	 	= \033[0;32m
BROWN 	 	= \033[0;33m
BLUE 		= \033[0;34m
PURPLE 	 	= \033[0;35m
CYAN 	 	= \033[0;36m
LIGHT_GRAY	= \033[0;37m

DARK_GRAY	= \033[1;30m
LIGHT_RED	= \033[1;31m
LIGHT_GREEN	= \033[1;32m
YELLOW 		= \033[1;33m
LIGHT_BLUE	= \033[1;34m
LIGHT_PURPLE= \033[1;35m
LIGHT_CYAN	= \033[1;36m
WHITE 		= \033[1;37m
