#include<assert.h>

int
square_of(int x)
{
	return x * x;
}

int
cube_of (int x)
{
	return x * x * x;
}


int
average(int a, int b, int c)
{
	return (a + b + c)/3;
}


int calculate_with(int a)
{
	return average(a, square_of(a), cube_of(a));
}

int main (int argc, char* argv[]){
	
	assert( calculate_with(10)==370);
	
	return 0;
}
