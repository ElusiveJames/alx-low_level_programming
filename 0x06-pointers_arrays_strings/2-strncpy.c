/**
  *_strncpy - copies a string
  *@dest: destnation of string
  *@src: source string
  *@n: limiter of character copied
  *Return: copied string from source
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char lc;

	lc = src[n];

	for (i = 0; src[i] < lc; i++)
		dest[i] = src[i];
	return (dest);
}
