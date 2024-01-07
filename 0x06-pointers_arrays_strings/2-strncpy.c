/**
  *_strncpy - copies a string
  *@dest: destnation of string
  *@src: source string
  *@n: number of bytes allocated to dest string
  *if src < dest fill with 0 bytesd
  *Return: copied string from source
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		dest[i] = *(src + i);
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
