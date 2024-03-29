# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmoumani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019\10\25 22:23:14 by hmoumani          #+#    #+#              #
#    Updated: 2019/11/02 23:03:40 by hmoumani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_strtrim.c ft_atoi.c ft_isascii.c ft_memchr.c ft_putchar_fd.c \
	ft_strdup.c ft_strmapi.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memcmp.c\
	ft_putendl_fd.c ft_strjoin.c ft_strncmp.c ft_toupper.c ft_calloc.c \
	ft_isprint.c ft_memcpy.c ft_putnbr_fd.c ft_strlcat.c ft_strnstr.c \
	ft_isalnum.c ft_itoa.c ft_memmove.c ft_putstr_fd.c ft_strlcpy.c  \
	ft_strrchr.c ft_isalpha.c ft_memccpy.c ft_memset.c ft_strchr.c  \
	ft_strlen.c ft_substr.c ft_split.c

SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJB = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
	ft_lstlast_bonus.o  ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
	ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

OBJ = ft_strtrim.o ft_atoi.o ft_isascii.o ft_memchr.o ft_putchar_fd.o \
	ft_strdup.o ft_strmapi.o ft_tolower.o ft_bzero.o ft_isdigit.o ft_memcmp.o \
	ft_putendl_fd.o ft_strjoin.o ft_strncmp.o ft_toupper.o ft_calloc.o \
	ft_isprint.o ft_memcpy.o ft_putnbr_fd.o ft_strlcat.o ft_strnstr.o \
	ft_isalnum.o ft_itoa.o ft_memmove.o ft_putstr_fd.o ft_strlcpy.o \
	ft_strrchr.o ft_isalpha.o ft_memccpy.o ft_memset.o ft_strchr.o \
   	ft_strlen.o ft_substr.o ft_split.o

all : $(NAME) bonus

$(NAME) :
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ) && ranlib $(NAME)

clean :
	rm -f *.o

bonus :
	gcc $(CFLAGS) -c $(SRCB)
	ar rc $(NAME) $(OBJB) && ranlib $(NAME)

fclean : clean
	rm -f $(NAME)

re : clean fclean all

.PHONY : clean fclean all
