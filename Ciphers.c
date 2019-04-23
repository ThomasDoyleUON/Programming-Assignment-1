#include <stdio.h>
#include <string.h>


int main(void)
{
    
    

    char ccstr[100] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG"; //Inital String
    char ccestr[100]; //Initalises Encrypted String
    char ccunstr[100];
    int key = 3; //Key for cipher
    int strsize = strlen(ccstr);
    
//---------------------------------------------------------------------------------------------------------------------------    
//Ceaser Cipher Encryption
    
    for(int i = 0; (i < strsize); i++){ //Runs through string until it reaches null character '\0'      
        if (ccstr[i] == ' ')
        {
            ccestr[i] = ' ';
        }
        else
        {
            ccestr[i] = ((((ccstr[i] + key) - 65) % 26) + 65); // Takes string and uses key and mod to place into new string.
        }
 
}
    printf("%s\n", ccestr);

//--------------------------------------------------------------------------------------------------------------------------------    
//Ceaser Cipher Decryption
    
    for(int i = 0; i < (strsize); ++i){ //Runs through string until it reaches end of string     
        if (ccestr[i] == ' ')
        {
            ccunstr[i] = ' ';
        }
        else
        {
            ccunstr[i] = ((((ccestr[i] - key + 26) - 65) % 26) + 65); // Takes string and uses key and mod to place into new string.
        }  
    
}
    printf("%s\n", ccunstr); 
//--------------------------------------------------------------------------------------------------------------------------------    
//Substitution Cipher Encryption





//-------------------------------------------------------------------------------------------------------------------------------- 
}



