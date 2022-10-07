#==============================================================================#
#                                   TARGETS                                    #
#==============================================================================#

NAME = libft.a
EXEC = libft_executor

#==============================================================================#
#                                   COMMANDS                                   #
#==============================================================================#

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DFLAGS = -MMD
AR = ar -rc
MKDIR = mkdir -p
RM = rm -f
MAKE_SILENT = make --no-print-directory

#==============================================================================#
#                                    COLORS                                    #
#==============================================================================#

PURPLE = \033[35m
GREEN = \033[32m
YELLOW = \033[33m
END = \033[0m

#==============================================================================#
#                                    PATHS                                     #
#==============================================================================#

SRC_DIR = src
HEADER_DIR = include
OBJ_DIR = obj

#==============================================================================#
#                                   SOURCES                                    #
#==============================================================================#

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c ft_long_long_atoi.c ft_delete_content.c \
		ft_print_array.c ft_get_size_array.c ft_free_array.c ft_print_bits.c \
		ft_iswhitespace.c ft_islower.c ft_get_size_number.c ft_get_file_content.c \
		ft_print_exit.c ft_strcmp.c ft_pathjoin.c ft_strcut_right.c \
		ft_strcut_left.c ft_perror_exit.c ft_split_charset.c ft_strjoin_free \
		\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c	ft_lstis_correct.c \

#==============================================================================#
#                                   HEADERS                                    #
#==============================================================================#

HEAD_NAME = $(HEADER_DIR)/libft.h
HEAD_LISTS = $(HEADER_DIR)/linked_lists.h

#==============================================================================#
#                                   OBJECTS                                    #
#==============================================================================#

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

#==============================================================================#
#                                  LIBRARIES                                   #
#==============================================================================#

LIBFT = libftbase.a
PRINTF = ft_printf/libftprintf.a
GNL = ft_get_next_line/libftgnl.a

#==============================================================================#
#                                   MAKEFILE                                   #
#==============================================================================#

all : $(OBJ_DIR) $(NAME)

exec : $(OBJ_DIR) $(EXEC)

$(EXEC) : $(NAME)
	echo "$(YELLOW)Making Libft Executor$(END)"
	$(CC) $(CFLAGS) $(NAME) -o $(EXEC)
	echo "$(GREEN)Done$(END)"

$(NAME) : $(OBJ)
	$(MAKE_SILENT) -C ft_printf
	$(MAKE_SILENT) -C ft_get_next_line
	echo "$(YELLOW)Making Libft$(END)"
	$(AR) $(LIBFT) $^
	$(AR)T $(NAME) $(LIBFT) $(PRINTF) $(GNL)
	echo "$(GREEN)Done$(END)"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEAD_NAME) $(HEAD_LISTS)
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

$(OBJ_DIR) :
	$(MKDIR) $(OBJ_DIR)

clean :
	$(MAKE_SILENT) fclean -C ft_printf
	$(MAKE_SILENT) fclean -C ft_get_next_line
	echo "$(PURPLE)Cleaning Libft's objects...$(END)"
	$(RM)r $(OBJ_DIR)
	echo "$(GREEN)Done$(END)"

fclean : clean
	echo "$(PURPLE)Cleaning Libft...$(END)"
	$(RM) $(LIBFT) $(EXEC) $(NAME)
	echo "$(GREEN)Done$(END)"

re : fclean
	$(MAKE_SILENT) all

.PHONY : all clean fclean re
.SILENT :
