#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef EVEN_MSG
#  define EVEN_MSG "I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
#  define ODD_MSG "I have an odd number os arguments.\n"
# endif

# ifndef EVEN
#  define EVEN(nbr) (nbr % 2) == 0
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

typedef unsigned int	t_bool;

# ifndef SUCCESS
#  define SUCCESS 0
# endif

#endif
