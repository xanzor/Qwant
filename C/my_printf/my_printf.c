
#include <unistd.h> 
#include <stdlib.h>
#include <stdarg.h> //va_list args
#include <stdio.h>
#include <string.h>

     int my_putchar(char c){
        write(1, &c, 1);
        return 0;
    }

typedef unsigned int ui;
typedef unsigned long ul;

int my_printf(const char *, ...);
char *convert(va_list *, char);
char *_int(int);
char *_octal(ui);
char *_u(ui);
char *_hexa(ui);
char *_ptr(void *);


int my_printf(const char *format_string, ...)
{
        char *temp;
        int size = 0;
        
        va_list args; //Переменная типа va_list – список аргументов
        va_start(args, format_string); //Устанавливаем указатель на первый элемент

        int len = strlen(format_string);
        
        if (format_string[len - 1] == '%')
        {
                char error[] = "\nError: \"\%%\"";
                printf("%s", error);
                return 0;
        }
        
        for (int i = 0; i < len; i++)
        {
                if (format_string[i] == '%')
                {
                        i += 1;
                        temp = convert(&args, format_string[i]); 
                        if (temp == NULL)
                        {
                                va_end(args);
                                return 0;
                        }
                        write(1, temp, strlen(temp));
                        size += strlen(temp);
                }
                else
                {
                        size = size + 1;
                        write(1, &format_string[i], 1);
                }
        }

        va_end(args);//необходим для завершения работы функции, работает в паре с  va_start.
        return size;
}

char *convert(va_list *args, char type)
{
        char *str;
        char *res;
        switch(type)
        {
                case 's':
                        str = va_arg(*args, char *); // va_arg -  используется для получения доступа к очередному аргументу
                        if(str == NULL)
                        {
                            res = malloc(8);
                            strcpy(res, "(null)");
                        }
                        else {
                            res = malloc(strlen(str) + 1);
                            res = strcpy(res, str);
                            res[strlen(str)] = 0;
                        }
                        break;
                case 'c':
                        res = malloc(2);
                        res[0] = va_arg(*args, int);
                        res[1] = 0;
                        break;
                case 'd':
                        //res = malloc(2);
                        res = _int(va_arg(*args, int));
                        
                        break;
                case 'o':
                        res = _octal(va_arg(*args, ui));
                        break;
                
                case 'x':
                        res = _hexa(va_arg(*args, ui));
                        break;
                case 'p':
                        res = _ptr(va_arg(*args, void *));
                        break;
                
                        case 'u':
                        res = _u(va_arg(*args, ui));
                        break; 
                
                default:
                         printf("\nError\n");
                        return NULL;
                        break;
        }
        return res;
}

char *_int(int x)
{
        char *string;
        int size = 0;
        int no = 0;
        if (x < 0)
        {
                x = -x;
                no = 1;
        }
        int copy_n = x;
        while (copy_n > 0)
        {
                size += 1;
                copy_n /= 10;
        }
        int len = size + no;
        string = malloc(len + 1);
        copy_n = x;
        if (no) string[0] = '-';
        for (int i = len - 1; i >= no; i--)
        {
                string[i] = copy_n % 10 + '0';
                copy_n /= 10;
        }
        string[len] = 0;

        
        return string;
}

char *_octal(ui x)
{
        char *string;
        int size = 0;
        int no = 0;
        ui copy_n = x;
        while (copy_n > 0)
        {
                size += 1;
                copy_n /= 8;
        }
        int len = size + no;
        string = malloc(len + 1);
        copy_n = x;
        if (no) string[0] = '-';
        for (int i = len - 1; i >= no; i--)
        {
                string[i] = copy_n % 8 + '0';
                copy_n /= 8;
        }
         if (x==0) {size =1;}
        string[len] = 0;
        return string;
}

char *_hexa(ui x)
{
        char *string;
        int size = 0;
        int no = 0;
        ui copy_n = x;
        while (copy_n > 0)
        {
                size += 1;
                copy_n /= 16;
        }
        int len = size + no;
        string = malloc(len + 1);
        copy_n = x;
        if (no) string[0] = '-';
        for (int i = len - 1; i >= no; i--)
        {
                if (copy_n % 16 < 10)
                {
                        string[i] = copy_n % 16 + '0';
                }
                else string[i] = copy_n % 16 - 10 + 'a';
                copy_n /= 16;
        }
        string[len] = 0;
        return string;
}

char *_hexa_p(ul x)
{
        char *string;
        int size = 0;
        int no = 0;
        ul copy_n = x;
        while (copy_n > 0)
        {
                size += 1;
                copy_n /= 16;
        }
        int len = size + no;
        string = malloc(len + 1); 
        copy_n = x;
        if (no) string[0] = '-';
        for (int i = len - 1; i >= no; i--)
        {
                if (copy_n % 16 < 10)
                {
                        string[i] = copy_n % 16 + '0';
                }
                else string[i] = copy_n % 16 - 10 + 'a';
                copy_n /= 16;
        }
        string[len] = 0;
        return string;
}


char *_u(ui x)
{
        char *string;
        int size = 0;
        ui copy_n = x;
        while (copy_n > 0)
        {
                size += 1;
                copy_n /= 10;
        }
        int len = size;
        string = malloc(len + 1);
        copy_n = x;
        for (int i = len - 1; i >= 0; i--)
        {
                string[i] = copy_n % 10 + '0';
                copy_n /= 10;
        }
        string[len] = 0;
        return string;
}

char *_ptr(void *ptr)
{
        ul address = (ul)ptr;
        char *hexa = _hexa_p(address);
        char *string = malloc(2 + strlen(hexa) + 1);
        string[0] = 0;
        if (strlen(hexa) == 0)
        {
                string = realloc(string, 6);
                string = strcpy(string, "(nil)"); 
                string = "(nil)";
        }
        else 
        {
                string = strcat(string, "0x");
                string = strcat(string, hexa);
        }
        
        free(hexa);
        return string;
}

// int main()
// {
//         // printf(": %d\n", my_printf("%p: %s", NULL, "Anz"));
//         // printf(": %d\n", printf("%p: %s", NULL, "Anz"));
//          // my_printf("%d - %d - %d!\n", 2048, 0, -1337);
         
//         // printf("%d\n", my_printf("NULL STRING %s!\n", (char *)NULL)); 
//         // my_printf("NULL STRING %s!\n", (char*)NULL);
//         //printf("%d\n", printf("NULL STRING %s!", (char *)NULL));
//         char*a = "aa";
//         my_printf("%p!\n", a);
        

//         return 0;
// }



