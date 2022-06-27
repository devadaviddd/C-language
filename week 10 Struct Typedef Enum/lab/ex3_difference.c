#if 0
#include <stdio.h>
struct point { double x; double y; };
int main(void) 
{
    struct point test;
    test.x = .25; test.y = .75;
    printf("[%lf, %lf]\n", test.x, test.y); //lf: long float double
    return 0;
}
#endif


#if 0
#include <stdio.h>
typedef struct { double x; double y; } point;
int main(void) 
{
    point test;
    test.x = .25; test.y = .75;
    printf("[%lf, %lf]\n", test.x, test.y);
    return 0;
}
#endif


#if 1
#include <stdio.h>
typedef struct { double x; double y; } point;
int main(void) 
{
    point test = {.25, .75}; //cant resuable 
    printf("[%lf, %lf]\n", test.x, test.y);
    return 0;
}

#endif