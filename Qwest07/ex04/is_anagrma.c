
int is_anagram(char* param_1, char* param_2)
{
  int first[32] = {0}, second[126] = {0}, c=0;


  while (param_1[c] != '\0') {
    first[param_1[c]-'a']++;
    c++;
  }

  c = 0;

  while (param_2[c] != '\0') {
    second[param_2[c]-'a']++;
    c++;
  }



  for (c = 0; c < 26; c++)
    if (first[c] != second[c])
      return 0;

  return 1;
}