char *inter(char *param_1, char *param_2)
{
  int i;
  int j;
  int ascii[256] = {0};

  i = 0;
  while (param_2[i])
  {
    if (ascii[(int)param_2[i]] == 0)
      ascii[(int)param_2[i]] = 1;
    i++;
  }

  i = 0;
  j = 0;
  while (param_1[i])
  {
    if (ascii[(int)param_1[i]] == 1)
    {
      ascii[(int)param_1[i]] = 2;
      param_1[i];
    }
    i++;
  }
  return param_1;
}


int main(int argc, char **argv)
{
 	if (argc == 3)
 		inter(argv[3], argv[4]);
 	return 0;
 }