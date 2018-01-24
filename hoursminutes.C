#include <stdio.h>
#include <stdlib.h>
void main()
{
if ( (numMinutes / 60) == 1 ) 
printf("%01d hour",numMinutes/60);
else 
printf("%01d hours",numMinutes/60);
if ( (numMinutes % 60) == 1) 
printf(" %01d minute\n",numMinutes%60);
else
printf(" %01d minutes\n",numMinutes%60);
}
