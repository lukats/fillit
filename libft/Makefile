NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h

SRCS = ft_atoi_base.c \
	   ft_atoi.c \
	   ft_bzero.c \
	   ft_countwords.c \
	   ft_dllstaddb.c \
	   ft_dllstadd.c \
	   ft_dllstdel.c \
	   ft_dllstdelone.c \
	   ft_dllstlen.c \
	   ft_dllstnew.c \
	   ft_dllstpopb.c \
	   ft_dllstpop.c \
	   ft_fmod.c \
	   ft_ftoa.c \
	   ft_indigit.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isbspace.c \
	   ft_isdigit.c \
	   ft_islower.c \
	   ft_isprint.c \
	   ft_isspace.c \
	   ft_isupper.c \
	   ft_itoa_base.c \
	   ft_itoa.c \
	   ft_lstaddb.c \
	   ft_lstadd.c \
	   ft_lstdel.c \
	   ft_lstdelcontent.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstlen.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstpopb.c \
	   ft_lstpop.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memdel.c \
	   ft_memmove.c \
	   ft_memrchr.c \
	   ft_memset.c \
	   ft_putc.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_puts.c \
	   ft_putstr.c \
	   ft_putstr_fd.c \
	   ft_rdllstlen.c \
	   ft_rstrlenic.c \
	   ft_stpcpy.c \
	   ft_stpncpy.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strchrnul.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strndup.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtrim.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_xpowni.c \
	   ft_gnl.c\
	   ft_malloc_tab.c \

OBJ = $(SRCS:.c=.o)

.PHONY: re all clean fclean
.NOTPARALLEL: re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
