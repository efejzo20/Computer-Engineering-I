//efejzo20
#include <stdio.h>
#include <stdlib.h>
void fileCopyContent(char *inputfile, char *outputfile);
int main(int argc, char **argv)
{
    if(argc<3)
    {
        printf("Enter 3 arguments");
        return 1;
    }
    else if(argc>3)
    {
        printf("Only first three will be taken into consoderation");
    }
    fileCopyContent(argv[1],argv[2]);
    return 0;
}
void fileCopyContent(char *inputfile, char *outputfile)
{
    FILE *infile, *outfile;

    infile=fopen(inputfile,"r");

    if(infile==NULL)
    {
        printf("Cant open file");
        exit(2);
    }

    if(outputfile==NULL)
    {
        printf("Cant open file");
        exit(3);
    }

    outfile=fopen(outputfile, "w");

    char ch;

    while((ch=fgetc(infile))!= EOF)
    {
        fputc(ch,outfile);
    }
    fclose(infile);
    fclose(outfile);

    printf("\nDone");
}
