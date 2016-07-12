strcpy(char s1[], char s2[])
{
	int x;
	for (x=0; x<=strlen(s2); x++)
		s[x] = s2[x];
}

/* OR */

strcpy(char s1[], char s2[])
{
	int x, len;
	len = strlen(s2);
	for (x=0; x<=len; x++)
		s1[x] = s2[x];
}

/* OR */

strcpy(char *s1, char *s2)	/* ----MOST EFFICIENT !!!---- */
{
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
}

/* OR */

strcpy(char *s1, char *s2)
{
	while(*s2)
		*s1++ = *s2++;
}

/* OR */

strcpy(char *s1, char *s2)
{
	while (*s1++ = *s2++);
}