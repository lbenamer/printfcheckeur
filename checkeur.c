#include "libft.h"
#include <stdio.h>
#define couleur(param) printf("\033[%sm",param)

int main(int argc, char const *argv[])
{
	int fd1;
	int fd2;
	int fd3;
	int fd4;
	int fail = 0;
	int	i = 0;
	char *line;
	char **std;
	char **ptf;
	char **main;

	std = ft_memalloc(sizeof(char*) * 10000);
	ptf = ft_memalloc(sizeof(char*) * 10000);
	main = ft_memalloc(sizeof(char*) * 10000);
	
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_WRONLY);
		fd4 = open(argv[4], O_RDONLY);
	
		while(get_next_line(fd1, &line))
			std[i++] = ft_strdup(line);
		i = 0;
		while(get_next_line(fd2, &line))
			ptf[i++] = ft_strdup(line);
		i = 0;
		while(get_next_line(fd4, &line))
			main[i++] = ft_strdup(line);
		//ft_printstab(std);
		//ft_printstab(ptf);
		i = 0;
		while(ptf[i] && std[i])
		{
				if(ft_strcmp(ptf[i], std[i]))
				{
					++fail;
					couleur("34");
					ft_putstr_fd("ERROR TEST NUMBER ", fd3);
					ft_putnbr_fd(i+1, fd3);
					write(fd3, "\n", 1);
					couleur("0");
					ft_putstr_fd(main[i+7], fd3);	
					write(fd3, "\n", 1);
					ft_putstr_fd("Fonction printf lib C return :\n", fd3);
					ft_putstr_fd(std[i], fd3);
					write(fd3, "\n", 1);
					ft_putstr_fd("Fonction ft_printf lib ft return :\n" , fd3);
					ft_putstr_fd(ptf[i], fd3);
					write(fd3, "\n", 1);
					write(fd3, "**********", 10);
					write(fd3, "\n", 1);
				}
				i++;
		}
		if(!fail)
		{
			couleur("32");
			printf("FT_PRINTF TESTS RESULTS >>> %d FAIL ON %d TESTS", fail, i);
			couleur("0");
		}
		else
		{
			couleur("31");
			printf("FT_PRINTF TESTS RESULTS >> %d FAIL ON %d TESTS", fail, i);
			couleur("0");
		}
	return 0;
}