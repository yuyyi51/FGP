#ifndef TOOLH
#define TOOLH

#ifndef CTIME
#define CTIME
#include <ctime>
#endif

void wait( int t )
{
	int t1 = time(0) ;
	while( time(0) - t1 < t ){}
}

#endif
