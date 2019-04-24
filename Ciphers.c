#include <stdio.h>
#include <string.h>


int main(void)
{
    
    

    char ccstr[100] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG"; //Inital String
    char ccestr[100]; //Initalises Caesar Cipher Encrypted String
    char ccunstr[100]; //Initalises Caesar Cipher Decrypted String
    int key = 3; //Key for cipher
    int strsize = strlen(ccstr); // Creates a varible strsize from Caesar Cipher Encrypted String
    
//---------------------------------------------------------------------------------------------------------------------------    
//Ceaser Cipher Encryption
    
    for(int i = 0; (i < strsize); i++) //Runs through string until it reaches null character '\0' 
        {      
        if (ccstr[i] == ' ') // Checks if character is a space
        {
            ccestr[i] = ' '; // If true makes a space. 
        }
        else
        {
            ccestr[i] = ((((ccstr[i] + key) - 65) % 26) + 65); // Takes string and uses key and mod to place into Caesar Cipher Encrypted String.
        }
 
}
    printf("%s\n", ccestr);

//--------------------------------------------------------------------------------------------------------------------------------    
//Ceaser Cipher Decryption
    
    for(int i = 0; i < (strsize); ++i)
        { //Runs through string until it reaches end of string     
        if (ccestr[i] == ' ') // Checks if character is a space
        {
            ccunstr[i] = ' '; // If true makes a space. 
        }
        else
        {
            ccunstr[i] = ((((ccestr[i] - key + 26) - 65) % 26) + 65); // Takes string takes away key and adds 26 to return to values. Then uses mod to place int0 Caesar Cipher Decrypted String.
        }  
    
}
    printf("%s\n", ccunstr); 
//--------------------------------------------------------------------------------------------------------------------------------    
//Substitution Cipher Encryption
    
//char alphabetstr[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char esckeystr[100] =  "QWERTYUIOPASDFGHJKLZXCVBNM"; //Initalises Substitution Cipher
    char escstr[100] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG"; //Inital String
    char escestr[100];
    int alphatemp;
    int escstrsize = strlen(escstr);
    
   
    for(int x = 0; x < (escstrsize); x++)
    { 
    if (escstr[x] == ' ') // Checks if character is a space
        {
            escestr[x] = ' '; // If true makes a space. 
        }
        else
        {
            alphatemp = escstr[x] - 65;
            escestr[x] = esckeystr[alphatemp];
        } 
        
    }
    
    printf("%s", escestr);
    
//-------------------------------------------------------------------------------------------------------------------------------- 
//Substitution Cipher Decryption




}



