int my_fibonacci(int param_1)
{
    if (param_1 < 0)
        return -1;


        if (param_1 < 2)
		return (param_1);
	else
		return (ft_fibonacci(param_1 - 1) + ft_fibonacci(param_1 - 2));

}