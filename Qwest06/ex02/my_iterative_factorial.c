int my_iterative_factorial(int param_1)
{   

    if (param_1 < 0)
        return 0;

    if (param_1 > 0)
        if (param_1 == 0 || param_1 == 1) return 1;
            return param_1 * my_iterative_factorial(param_1 - 1);
          
}