# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 17:31:05 by icruces-          #+#    #+#              #
#    Updated: 2024/07/28 20:35:21 by icruces-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Standard 

NAME = libft.a

#Directories

INCLUDE = inc/
SRC_DIR = src/
OBJ_DIR = obj/

#Files
SRC_FILES	=  \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
			ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_calloc.c ft_strdup.c ft_atol.c\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
			get_next_line.c get_next_line_utils.c \
			ft_printf_utils.c ft_printf.c

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

#Compiler and Flags
CC = gcc
AR		= ar -crs
CFLAGS 	= -Wall -Wextra -Werror -I$(INCLUDE)
RM = rm -f

#Define message style
define PRINT_MESSAGE
	@echo "\n*********************************************"
	@echo "* $1"
	@echo "*********************************************\n"
endef

#Build rules

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(call PRINT_MESSAGE,"Creating library $@...")
	$(AR) $(NAME) $^

clean: 
	$(call PRINT_MESSAGE, "Cleaning temporary files of $(NAME)...")
	$(RM) -rf $(OBJ_DIR)
#	$(RM) $(TARGET)

fclean:
	$(call PRINT_MESSAGE, "Removing all generated files...")
	$(RM) -rf $(OBJ_DIR)
#	$(RM) $(TARGET)
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
