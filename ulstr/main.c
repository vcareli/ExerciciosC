/********************************************************************************
*   Fazer programa que inverta as letras, mais para minusc e vice-cersa.        *
*   Demais caracteres devem ficar como estao                                    *
*   Retornar '\n' no fim de cada string                                         *
*   Se houver 1 paramentro ou mais retornar '\n'                                *
*   PERMITIDO SOMENTE USO DA FUNCAO: WRITE()                                    *
*   ALEM DE FUNCOES CRIADAS POR VC MESMO !                                      *
*   Programa deve ser compilado gcc -Werror -Wextra -Wall ulstr.c -o ulstr      *
*********************************************************************************/
#include <unistd.h>

void ulstr(char *str);
int	ft_str_is_alpha(char *str);
int	ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
void ft_putchar(char *c);

int main(int argc, char **argv)
{
    int i;
    int q;

    i = 1;
    q = argc - 1;
    while (q != 0)
    {
        ulstr(argv[i]);
        i++;
        q--;
    }
    if (argc > 2)
        ft_putchar("\n");
    return 0;
}

void ulstr(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_str_is_alpha(&str[i]))
        {
            if (ft_str_is_lowercase(&str[i]))
            {
                c = str[i] - 32;
                ft_putchar(&c);
            }
            else if (ft_str_is_uppercase(&str[i]))
            {
                c = str[i] + 32;
                ft_putchar(&c);
            }
        }
        else
            ft_putchar(&c);
        i++;
    }
    ft_putchar("\n");
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

int ft_str_is_uppercase(char *str)
{
	int	i;
	int	value;

	value = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

void ft_putchar(char *c)
{
    write(1, &c, 1);
}
