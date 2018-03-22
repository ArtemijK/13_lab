#ifndef FUN
#define FUN


struct aeroflot{
    char destination[20];
    int number;
    char brand[10];
};

typedef struct aeroflot aeroflot;

void sort (aeroflot* , int, FILE*, FILE*);
void name (FILE*, aeroflot*, FILE*);
void punkt3 (aeroflot*);
void punkt4 (aeroflot*);


#endif