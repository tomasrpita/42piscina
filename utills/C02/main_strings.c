#include <stdio.h>

//int ft_str_is_alpha(char *str);
//int ft_str_is_numeric(char *str);
//int ft_str_is_lowercase(char *str);
//char *ft_strupcase(char *str);
char *ft_strcapitalize(char *str);

int main ()
{
	
	//int devuelve;
	// char cadenaSrc[] = {'1', '4', '6'}; 

	char cadenaSrc[] = "hola, ¿cómo estás? 42palabras cuarenta-y-dos; cincuenta+y+uno";
	// devuelve  = ft_str_is_alpha(cadenaSrc);
   	// devuelve = ft_str_is_numeric(cadenaSrc);
	// devuelve = ft_str_is_lowercase(cadenaSrc);
	
	// char devuelve[19];  	
	
	// devuelve = ft_strupcase(cadenaSrc);
	
			
	//printf("el resultado es: %d", devuelve);
	char cadena2Src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("el resultado es: %s\n", ft_strcapitalize(cadenaSrc));

	printf("el resultado es: %s\n", ft_strcapitalize(cadena2Src));
	printf("el resultado es: %s\n", ft_strcapitalize(""));
}
