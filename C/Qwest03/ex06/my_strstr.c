#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strstr(char *str, char *sub)
{
  if (sub[0] == '\0')
  {
    return str;
  }
  if (strlen(sub) > strlen(str))
  {
    return 0;
  }
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == *sub)
    {
      int k = i;
      for (int j = 0; j < strlen(sub); j++)
      {
        if (str[k] == sub[j])
        {
          k += 1;
        }
        if (k - i - 1 == strlen(sub) - 1)
        {
          return &str[i];
        }
      }
    }
  }
  return NULL;
}

// char* my_strstr(char* haystack, char* needle)
// {
//     int i = 0;
// 	int j = 0;
// 	if (haystack[i] == '\0' && needle[j] == '\0')
// 		return ((char*)haystack);
// 	while (haystack[i] != '\0')
// 	{
// 		while (haystack[i + j] == needle[j] &&
// 				haystack[i + j] != '\0')
// 			j++;
// 		if (needle[j] == '\0')
// 			return ((char*)haystack + i);
// 		i++;
// 		j = 0;
// 	}
// 	return (NULL);

// }