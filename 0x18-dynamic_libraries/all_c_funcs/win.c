#include "main.h"


/**
 * rand - randomly make me win
 * Return: nothing
 */
int rand(void)
{
	static int control = -1;

	switch (control)
	{
		case 0:
			return (8);
		case 1:
			return (8);
		case 2:
			return (7);
		case 3:
			return (9);
		case 4:
			return (23);
		case 5:
			return (74);
	}
	return (control * control % 30000);
}
