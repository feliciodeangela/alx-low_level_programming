#include "main.h"
/**
 * set_string - Entry point.
 * Description: Set @**s to @*to.
 * @**s: pointer to change.
 * @*to: value to set.
 */
void set_string(char **s, char *to)
{
	**s = *to;
}
