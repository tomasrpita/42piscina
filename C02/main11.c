void ft_putstr_non_printable(char *str);

int main()
{
	ft_putstr_non_printable("\e Escape \f Form feed \n Newline \r  Carriage return");
}
