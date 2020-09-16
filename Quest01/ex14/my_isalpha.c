int my_isalpha(char param)
{
	if (param >= 'A' && param <= 'Z' || param >= 'a' && param <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}