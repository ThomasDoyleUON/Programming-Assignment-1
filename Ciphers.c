#include <stdio.h>
#include <string.h>


int main(void)
{
    //Ceaser Cipher Encryption
    char str[1000] = "abcde"; //Inital String
    char estr[1000]; //Initalises Encrypted String
    int key = 3; //Key for cipher
    int strsize = strlen(str);
    
    for(int i = 0; str[i] != '\0'; ++i){ //Runs through string until it reaches null character '\0'      
        if (str[i] == 32)
        {
            str[i] = 32;
        }
        else
        {
            estr[i] = ((((str[i] + key) - 97) % 26) + 97); // Takes string and uses key and mod to place into new string.
        }


}
    printf("%s\n", estr);
    //Ceaser Cipher Decryption
    for(int i = 0; i < (strsize - key); i++){ //Runs through string until it reaches null character '\0'      
        if (str[i] == ' ')
        {
            str[i] = ' ';
        }
        else
        {
        str[i] = ((((estr[i] - key) - 97) % 26) + 97); // Takes string and uses key and mod to place into new string.
        printf("%s\n", str);
        }  

}
printf("%s\n", str); 
    
  

}



