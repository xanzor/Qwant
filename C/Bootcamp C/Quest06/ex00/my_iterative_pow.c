 #include <math.h>
int my_iterative_pow(int param_1, int power)
{
    int result = 1;

	if (power < 0)
		return (0);

	while (power--)
		result *= param_1;
	return result;
}