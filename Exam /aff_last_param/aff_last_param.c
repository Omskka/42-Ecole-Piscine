#include <unistd.h>

int        main(int ac, char **av)
{
    int i;
	int d;

    i = 0;
    if (ac > 1)
    {
        d = ac -1;
        while (av[d][i] != '\0')
        {
            write(1, &av[d][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
