int my_string_index(char *haystack, char needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (needle == haystack[i])
		{
			return i;
		}
		i++;
	}
	return (-1);
}