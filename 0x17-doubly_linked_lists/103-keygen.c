#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * biggest_num - finds the biggest number
 * @username: the username
 * @length: length of the username
 * Return: the biggest number
 */
int biggest_num(char *username, int length)
{
	int user;
	int  vch;
	unsigned int rand_num;

	user = *username;
	vch = 0;
	while (vch < length)
	{
		if (user < username[vch])
			user = username[vch];
		vch += 1;
	}
	srand(user ^ 14);
	rand_num = rand();
	return (rand_num & 63);
}


/**
 * mul_username - multiplies each char of username
 * @username: the username
 * @length: length of username
 * Return: multiplied char
 */
int mul_username(char *username, int length)
{
	int user;
	int vch;

	user = vch = 0;

	while (vch < length)
	{
		user = user + username[vch] * username[vch];
		vch += 1;
	}
	return (((unsigned int)user ^ 239) & 63);
}


/**
* generate_char - generates a random char
* @username: the username
* Return: a random char
*/
int generate_char (char *username)
{
	int user;
	int vch;

	user = vch = 0;
	while (vch < *username)
	{
		user = rand();
		vch += 1;
	}
	return (((unsigned int)user ^ 229) & 63);
}


/**
 * generateKey - generates our key
 * @username: the username
 * @keygen: pointer to the key generator
 * Return: nothing
 */
void generateKey(char *username, char *keygen)
{
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	len = 0;
	while (username[len])
		len++;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + username[vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	vch = 0;

	while (vch < len)
	{
		ch = username[vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[biggest_num(username, len)];
	keygen[4] = ((char *)alph)[mul_username(username, len)];
	keygen[5] = ((char *)alph)[generate_char(username)];
	keygen[6] = '\0';
}


/**
* main - the program's entry point
* @argc: arguments count
* @argv: arguments array
* Return: 0 on Success
*/
int main(int argc, char **argv)
{
	char keygen[7];
	int i;

	if (argc < 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}
	generateKey(argv[1], keygen);
	for (i = 0; keygen[i]; i++)
	{
		printf("%c", keygen[i]);
	}
	return (0);
}
