#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define U_LONG unsigned long
# define U_CHAR unsigned char
# define U_INT unsigned int
# define MALLOC_CHECK(x) if (!x) return (0)
# define MALLOC_CHECK_GNL(x) if (!x) return (-1)
# define ABS(x) (x < 0) ? -x : x
# define BUFF_SIZE 1

typedef struct		s_list
{
	void			*content;
	U_LONG			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_dllst
{
	void			*content;
	U_LONG			content_size;
	struct s_dllst	*next;
	struct s_dllst	*prev;
}					t_dllst;

int					ft_isspace(int c);
int					ft_isbspace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int                 ft_putc(int c);
int                 ft_puts(const char *str);
void				*ft_memrchr(const void *b, int c, U_LONG len);
char				*ft_strndup(const char *str, U_LONG len);
char				*ft_stpcpy(char *dst, const char *src);
char				*ft_stpncpy(char *dst, const char *src, U_LONG len);
U_LONG				ft_strlcpy(char *dst, const char *src, U_LONG dstsize);
char				*ft_strchrnul(const char *s, int c);
int                 ft_xpowni(int x, U_INT n);
U_LONG				ft_countwords(char const *s, char splitter);
U_LONG				ft_rstrlenic(char const *s, U_LONG i, char c);
U_INT				ft_indigit(int n);
char				*ft_itoa_base(int n, char const *base);
int					ft_atoi_base(char const *str, char const *base);
char				*ft_ftoa(float nbr);
float				ft_fmod(float value, float modulo);
int					ft_gnl(const int fd, char **line);

void				*ft_memset(void *b, int c, U_LONG len);
void				ft_bzero(void *b, U_LONG len);
void				*ft_memcpy(void *dst, const void *src, U_LONG len);
void				*ft_memccpy(void *dst, const void *src, int c, U_LONG len);
void				*ft_memmove(void *dst, const void *src, U_LONG len);
void				*ft_memchr(const void *b, int c, U_LONG len);
int					ft_memcmp(const void *b1, const void *b2, U_LONG len);
U_LONG				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, U_LONG len);
char				*ft_strcat(char *s, const char *append);
char				*ft_strncat(char *s, const char *append, U_LONG count);
U_LONG				ft_strlcat(char *dst, const char *src, U_LONG dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, U_LONG len);
int                 ft_atoi(const char *str);
int					ft_isalpha(int c);
int                 ft_isdigit(int c);
int                 ft_isalnum(int c);
int                 ft_isascii(int c);
int                 ft_isprint(int c);
int                 ft_toupper(int c);
int                 ft_tolower(int c);
char	**ft_malloc_tab(int y, int x);



void				*ft_memalloc(U_LONG size);
void				ft_memdel(void **ap);
char				*ft_strnew(U_LONG size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(U_INT i, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(U_INT, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, U_LONG n);
char				*ft_strsub(char const *s, U_INT start, U_LONG len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void const *content, U_LONG content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, U_LONG));
void 				ft_lstdel(t_list **alst, void (*del)(void *, U_LONG));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstaddb(t_list **alst, t_list *new);
U_LONG				ft_lstlen(t_list *lst);
void				ft_lstpop(t_list **alst);
void				ft_lstpopb(t_list **alst);
void				ft_lstdelcontent(void *content, U_LONG size);

t_dllst				*ft_dllstnew(void const *content, U_LONG content_size);
void				ft_dllstdelone(t_dllst **alst, void (*del)(void *, U_LONG));
void 				ft_dllstdel(t_dllst **alst, void (*del)(void *, U_LONG));
void				ft_dllstadd(t_dllst **alst, t_dllst *new);
void				ft_dllstaddb(t_dllst **alst, t_dllst *new);
U_LONG				ft_dllstlen(t_dllst *lst);
U_LONG				ft_rdllstlen(t_dllst *lst);
void				ft_dllstpop(t_dllst **alst);
void				ft_dllstpopb(t_dllst **alst);

#endif
