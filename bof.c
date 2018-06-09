#include <stdio.h>
void read_this_string(void);
int main()
{
read_this_string();
return 0;
}

void read_this_string()
{
char buffer[10];
gets(buffer);
}
