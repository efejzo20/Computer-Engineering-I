//efejzo20
#include <stdio.h>
#include <stdlib.h>
void readfromFile(char *filenaem, char *str);
char lastChar(char *str);
void WritetoFile(char *filename, char *str);
void sort(char *str);

void print(char *str);

int main(int argc, char *argv[])
{
    if(argc<3)
    {
        printf("Enter 3 arguments");
        return 1;
    }
    else if(argc>3)
    {
        printf("Only the first three will be taken into consideration");
    }

    char *str;

    str=(char*)malloc(sizeof(char)*1000);

    readfromFile(argv[1],str);
    sort(str);
    WritetoFile(argv[2],str);
    print(str);


    return 0;
}
