//check password =at least one upper /at least 1 lower/ at least 1 char;

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void main() {

    char pass[20]; //password
    int a = 0; //size of the password
    int foundChar = 0;
    int foundUpper = 0;
    int foundLower = 0;
    int foundDigit = 0;
    int i = 0;

    do {
      printf("enter your password : ");
      scanf("%s", pass);
      a = strlen(pass);

      if (a = 8) {

        if (isdigit(pass[i]) && foundDigit == 0) {
          foundDigit = 1;
          i++;
        } else if (isupper(pass[i]) && foundUpper == 0) {
          foundUpper = 1;
          i++;
        } else if (islower(pass[i]) && foundLower == 0) {
          foundLower = 1;
          i++;
        } else if (foundChar == 0) {
          foundChar = 1;
          i++;
        }

      }
      printf("yes");

    }
    while ((a < 8) || (foundChar == 0) || (foundDigit == 0) || (foundUpper == 0) || (foundUpper = 0));

}
