int my_recursive_pow(int param_1, int power)
{
    int result = 1;

    if (power < 0)
        return 0;

    if (power > 0)
       result = param_1 * my_recursive_pow(param_1, power - 1);

        
    return result;
}