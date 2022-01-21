#ifndef AREAOFCIRCLE_H_INCLUDED
#define AREAOFCIRCLE_H_INCLUDED

double Area(int radius); // calculates the area of a circle with the given radius
int Continue(); // asks to the user if he wants to continue or not. If the user
// says 'y' it returns true, it returns false otherwise
int getRadius(); // this function gets radius from keyboard
void showResult(double area);// shows the result on screen

const double PI = 3.14159;


double Area(int rad)
{
    return PI*rad*rad;
}

int Continue()
{
    char d, ch;
    scanf("%c%c", &d, &ch);
    if (ch == 'y') return 1;
    return 0;
}

void showResult(double area)
{
    printf("%.2lf\n", area);
}

int getRadius()
{
    int rad;
    scanf("%d", &rad);
    return rad;
}



#endif // AREAOFCIRCLE_H_INCLUDED
