#include <iostream>
#include "Clock.h"
using namespace std;
Clock::Clock()
{
	begin=clock();
	}
clock_t Clock:: getTime(int x){
return ((clock()-begin)%x);
}
