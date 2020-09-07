//  #include <unistd.h>
//  #include <stdio.h>

int my_strlen(char *s)
{
	int i = -1;
	while (s[++i] != '\0')
		;
	return i;
}

//  int main(){

//    printf("%d", my_strlen("Anzor"));

//    return(0);
//  }
