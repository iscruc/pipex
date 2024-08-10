# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 23:00:16 by icruces-          #+#    #+#              #
#    Updated: 2024/08/10 18:41:27 by icruces-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= pipex.a
TARGET 	= pipex

#Directories
LIBS = libs
INC = inc/
SRC_DIR = src/
OBJ_DIR = obj/
TESTER_DIR = piex.dSYM/

#Compiler and Flags
CC 		= gcc 
CFLAGS 	= -Wall -Wextra -Werror -g
AR		= ar -crs
RM 		= rm -f
LDLIBS	:= -L$(LIBS) -lft
COMPLIBS = -I$(INC) -I$(LIBS)/inc

#Source Files
SRC_FILES	=  utils.c fork.c

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

#Define message style
define PRINT_MESSAGE
	@echo "\n*********************************************"
	@echo "* $1"
	@echo "*********************************************\n"
endef

#Build rules
all: $(TARGET)
	$(call PRINT_MESSAGE, "Successful!!!")

#compile object files from source files

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(COMPLIBS) -c $< -o $@

$(NAME): $(OBJ)
	$(call PRINT_MESSAGE,"Creating library files of $(LIBS)...")
	@make -C $(LIBS)
	$(call PRINT_MESSAGE,"Creating library $@...")
	$(AR) $(NAME) $^

clean: 
	$(call PRINT_MESSAGE, "Cleaning temporary files of $(TARGET)...")
	$(RM) -rf $(OBJ_DIR)
	$(RM) $(TARGET)
	$(RM) $(NAME)
	@make clean -C $(LIBS)

fclean:
	$(call PRINT_MESSAGE, "Removing all generated files...")
	$(RM) -rf $(OBJ_DIR)
	$(RM) $(TARGET)
	$(RM) $(NAME)
	$(RM) -rf $(TESTER_DIR)
	@make fclean -C $(LIBS)

re: fclean all

$(TARGET): main.c $(NAME)
	$(call PRINT_MESSAGE, "Generating executable $(TARGET)...")
	$(CC) $(CFLAGS) -o $@ $^ $(COMPLIBS) $(LDLIBS)

.PHONY: all clean fclean re