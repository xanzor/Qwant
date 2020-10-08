int my_atoi(char* param_1)
{
    int		a = 1;
	int		result = 0;
	int		i = 0;

    if (param_1[i] == '-' || param_1[i] == '+')
	{
		if (param_1[i++] == '-')
			a = -1;
	}
	while (param_1[i] && param_1[i] >= '0' && param_1[i] <= '9')
	{
		result *= 10;
		result += param_1[i++] - '0';
	}
	result *= a;
	return result;
}