#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_dict
{
	char	*num;
	char	*txt;
}				t_dict;

void	free_dict(t_dict *dict);
void	error(t_dict *dict);
void	error2(t_dict *dict);
void	putstr(char *str);
void	ft_memset(char *str, char c, int size);
int		skip(int fd, char *c, char x);
void	getnum(int fd, char *c, t_dict *dict, int i);
void	gettxt(int fd, char *c, t_dict *dict, int i);
t_dict	*read_dict(int fd, t_dict *dict);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*args(int *fd, t_dict *dict, int argc, char**argv);
void	solve(char *str, t_dict *dict);
char	*check_num(char *str);
void	case1(char *str, t_dict *dict);
void	case2(char *str, t_dict *dict);
void	case3(char *str, t_dict *dict);
char	*case4aux(char *str, int *len, t_dict *dict);
void	case4(char	*str, t_dict *dict);
char	*subzero(char *str, t_dict *dict);
char	*scorpion(char *str, t_dict *dict);
char	*crop(char *str, t_dict *dict);
char	*cut(char *str, int n, t_dict *dict);
char	*search(char *str, t_dict *dict);
char	*case4aux2(char *str, t_dict *dict);

#endif