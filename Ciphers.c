#include <stdio.h>


int main(void)
{
    char str[1000] = "qwertyuiopasdfghjklzxcvbnm"; //Inital String
    char estr[1000]; //Encrypted String
    int key = 2;
    int i = 1;
    
    for(i = 0; str[i] != '\0'; ++i)
        estr[i] = (str[i] + key)%26;
        
    printf("%s\n", estr);
}



