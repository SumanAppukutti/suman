#include <stdio.h>
#include <conio.h>
#include <string.h>
 void main()
 {
    char inputString[1001], outputArray[1001];
    int readIndex = 0, writeIndex;
    printf("Enter the String \n");
    gets(inputString);
    
    while(inputString[readIndex] == ' '){
        readIndex++;
    }
 
    for(writeIndex = 0;inputString[readIndex] != '\0'; readIndex++){
      if(inputString[readIndex]==' ' && inputString[readIndex-1]==' '){
          continue;
      }
      outputArray[writeIndex] = inputString[readIndex];
      writeIndex++;
    }
    outputArray[writeIndex] = '\0';
    printf("String without extra a spaces\n%s", outputArray);
 
    getch();
}
