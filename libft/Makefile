# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnikia <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 19:11:04 by cnikia            #+#    #+#              #
#    Updated: 2019/04/13 20:19:36 by cnikia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCD = ./
FLAGS = -Werror -Wextra -Wall
OPTIONS = -I./ -c
SRC = $(SRCD)ft_bzero.c \
	  $(SRCD)ft_memccpy.c \
	  $(SRCD)ft_memchr.c \
	  $(SRCD)ft_memcmp.c \
	  $(SRCD)ft_memcpy.c \
	  $(SRCD)ft_memmove.c \
	  $(SRCD)ft_memset.c \
	  $(SRCD)ft_putchar.c \
	  $(SRCD)ft_putstr.c \
	  $(SRCD)ft_strcat.c \
	  $(SRCD)ft_strchr.c \
	  $(SRCD)ft_strcpy.c \
	  $(SRCD)ft_strdup.c \
	  $(SRCD)ft_strlcat.c \
	  $(SRCD)ft_strlen.c \
	  $(SRCD)ft_strncat.c \
	  $(SRCD)ft_strncpy.c \
	  $(SRCD)ft_strrchr.c \
	  $(SRCD)ft_strstr.c \
	  $(SRCD)ft_strnstr.c \
	  $(SRCD)ft_strcmp.c \
	  $(SRCD)ft_strncmp.c \
	  $(SRCD)ft_atoi.c \
	  $(SRCD)ft_isalpha.c \
	  $(SRCD)ft_isdigit.c \
	  $(SRCD)ft_isalnum.c \
	  $(SRCD)ft_isascii.c \
	  $(SRCD)ft_isprint.c \
	  $(SRCD)ft_toupper.c \
	  $(SRCD)ft_tolower.c \
	  $(SRCD)ft_memalloc.c \
	  $(SRCD)ft_memdel.c \
	  $(SRCD)ft_strnew.c \
	  $(SRCD)ft_strdel.c \
	  $(SRCD)ft_strclr.c \
	  $(SRCD)ft_striter.c \
	  $(SRCD)ft_striteri.c \
	  $(SRCD)ft_strmap.c \
	  $(SRCD)ft_strmapi.c \
	  $(SRCD)ft_strequ.c \
	  $(SRCD)ft_strnequ.c \
	  $(SRCD)ft_strsub.c \
	  $(SRCD)ft_strjoin.c \
	  $(SRCD)ft_strtrim.c \
	  $(SRCD)ft_strsplit.c \
	  $(SRCD)ft_itoa.c \
	  $(SRCD)ft_putchar.c \
	  $(SRCD)ft_putstr.c \
	  $(SRCD)ft_putendl.c \
	  $(SRCD)ft_putnbr.c \
	  $(SRCD)ft_putchar_fd.c \
	  $(SRCD)ft_putstr_fd.c \
	  $(SRCD)ft_putendl_fd.c \
	  $(SRCD)ft_putnbr_fd.c \
	  $(SRCD)ft_lstnew.c \
	  $(SRCD)ft_lstdelone.c \
	  $(SRCD)ft_lstdel.c \
	  $(SRCD)ft_lstadd.c \
	  $(SRCD)ft_lstiter.c \
	  $(SRCD)ft_lstmap.c
CHACHE = ft_bzero.o \
		 ft_memccpy.o \
		 ft_memchr.o \
		 ft_memcmp.o \
		 ft_memcpy.o \
		 ft_memmove.o \
		 ft_memset.o \
		 ft_putchar.o \
		 ft_putstr.o \
		 ft_strcat.o \
		 ft_strchr.o \
		 ft_strcpy.o \
		 ft_strdup.o \
		 ft_strlcat.o \
		 ft_strlen.o \
		 ft_strncat.o \
		 ft_strncpy.o \
		 ft_strrchr.o \
		 ft_strstr.o \
		 ft_strnstr.o \
		 ft_strcmp.o \
		 ft_strncmp.o \
		 ft_atoi.o \
		 ft_isalpha.o \
		 ft_isdigit.o \
		 ft_isalnum.o \
		 ft_isascii.o \
		 ft_isprint.o \
		 ft_toupper.o \
		 ft_tolower.o \
		 ft_memalloc.o \
		 ft_memdel.o \
		 ft_strnew.o \
		 ft_strdel.o \
		 ft_strclr.o \
		 ft_striter.o \
		 ft_striteri.o \
		 ft_strmap.o \
		 ft_strmapi.o \
		 ft_strequ.o \
		 ft_strnequ.o \
		 ft_strsub.o \
		 ft_strjoin.o \
		 ft_strtrim.o \
		 ft_strsplit.o \
		 ft_itoa.o \
		 ft_putchar.o \
		 ft_putstr.o \
		 ft_putendl.o \
		 ft_putnbr.o \
		 ft_putchar_fd.o \
		 ft_putstr_fd.o \
		 ft_putendl_fd.o \
		 ft_putnbr_fd.o \
		 ft_lstnew.o \
		 ft_lstdelone.o \
		 ft_lstdel.o \
		 ft_lstadd.o \
		 ft_lstiter.o \
		 ft_lstmap.o
$(NAME):
	gcc $(FLAGS) -c $(HPLUS) $(SRC)
	ar rc $(NAME) $(CHACHE)
all: $(NAME)
clean:
	/bin/rm -f $(CHACHE)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
