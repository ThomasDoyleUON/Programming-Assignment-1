
#include<stdio.h>
#include<string.h>

char ccencrypt(char* str, int key); //Function Prototype For Ceasear Cipher Encrypt.

char ccdecrypt(char* str, int key); //Function Prototype For Ceasear Cipher Decrypt

char scencrypt(char* str, char* keystr); //Function Prototype For Subsitution Cipher Encrypt

char scdecrypt(char* str, char* keystr); //Function Prototype For Subsitution Cipher Decrypt

int main()
{
    
    
    //If something breaks values can be manually set underneath
    int key; //Key for ceaser cipher
    char str[100]; //Inital string for all ciphers
    int choice; //Choice for switch case
    char keystr[100]; //Key for subsititution cipher
    
    printf("~~Ceaser Cipher~~\n 0 = Encrypt\n 1 = Decrypt\n");
    printf("~~Subsitution Cipher~~\n 2 = Encrypt\n 3 = Decrypt\n");
    printf("Enter Choice For Processing: ");
    scanf("%d", &choice);

    
    
    
    
    switch(choice) // Switch Case For Menu Selection
    {
    case 0 : 
        {
        printf("Choosen Ceaser Cipher Encrypt\n");
        printf("Enter String: ");
        scanf("%s\n", str);
        printf("Enter Key: ");
        scanf("%d/n", &key);
        ccencrypt(str, key);
        printf("\n");
        break;
        }
    case 1 :
        {
        printf("Choosen Ceaser Cipher Decrypt\n");
        printf("Enter String: ");
        scanf("%s", str);
        printf("Enter Key: ");
        scanf("%d/n", &key);
        ccdecrypt(str, key);
        printf("\n");
        break;
        }

    case 2 :
        {
        printf("Choosen Subsitution Cipher Encrypt\n");
        printf("Enter String: ");
        scanf("%s", str);
        printf("Enter Key String: ");
        scanf("%s/n", keystr);
        scencrypt(str, keystr);
        printf("\n");
        break;
        }
    case 3 :
        {
        printf("Choosen Subsitution Cipher Decrypt\n");
        printf("Enter String: ");
        scanf("%s", str);
        printf("Enter Key String: ");
        scanf("%s/n", keystr);
        scdecrypt(str, keystr);
        printf("\n");
        break;
        }

    default:
    {
        printf("ERROR\n"); // Print Error if no choice value between 0-3 is found.
    }

    }
    
    
    
   
}
//Ceasear Cipher Encrypt
char ccencrypt(char* str, int key)
    {

    char ccestr[100]; //Initalises string for encrypted string to end up in.
    int ccestrsize = strlen(str); //Initalises varible for length of string
    for(int i = 0; (i < ccestrsize); i++)
        {      
        if (str[i] == ' ')
        {
            ccestr[i] = ' '; // If character is a space replace it with space
        }
        else
        {
            ccestr[i] = ((((str[i] + key) - 65) % 26) + 65); //Take current position of string add key minus 65 
        //use modulus to find amount over to wrap around and readd 65 to get character and place it encrypted string.
        }                                                    
        }  
    printf("%s", ccestr); //Print Result
    return 0;
    }
    
//Ceasear Cipher Decrypt    
    
    char ccdecrypt(char* str, int key)
    {    
        char ccunstr[100]; //Initalises Caesar Cipher Decrypted String
        int ccdstrsize = strlen(str); //Initalises varible for length of string
        
        for(int i = 0; i < (ccdstrsize); ++i)
            { //Runs through string until it reaches end of string     
            if (str[i] == ' ') // Checks if character is a space
            {
                ccunstr[i] = ' '; // If true makes a space. 
            }
            else
            {
                ccunstr[i] = ((((str[i] - key + 26) - 65) % 26) + 65); // Takes string takes away key and adds 26 to return to values. Then uses mod to place into Caesar Cipher Decrypted String.
            }  
        
            }

        printf("%s", ccunstr); //Print result
        return 0;

    }

    //Subsitution Cipher Encrypt
    
    char scencrypt(char* str, char* keystr)
    {
    char escestr[100]; //Initalises Substitution Cipher Encrypted String 
    int alphatemp; // Initalises temp alpha interger.
    int escstrsize = strlen(str); // Gets string size of inital string.
    
   
    for(int x = 0; x < (escstrsize); x++)
    { 
    if (str[x] == ' ') // Checks if character is a space
        {
            escestr[x] = ' '; // If true makes a space. 
        }
        else
        {
            alphatemp = str[x] - 65; //Turns number to index of 0
            escestr[x] = keystr[alphatemp]; //Takes alphatemp number and subsitutes with esckeystr
        } 
        
    }
    
    printf("%s\n", escestr); //Print result
    return 0;
    }
    
    //Subsitution Cipher Decryption
    char scdecrypt(char* str, char* keystr)
    {
    
    char alphabetstr[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Initalises alphabet for subsititution.
    char dscestr[100]; //Initalises Decrpyted Substitution Cipher
    int dscstrsize = strlen(str); //Finds length of Inital string
    int positiontemp; //Temp variable for position in string
    int alphatemp = 0;
    
 

    
    for(int x = -1; x < (dscstrsize); x++) // Runs through intial string until end
    {
    if (str[x] == ' ') // Checks if character is a space
        {
        dscestr[x] = ' '; // If true makes a space. 
        }
        else
        {
        positiontemp = str[x] - 65 ; //Takes string and turns to 0-25 numbers for string and places in temp.
        //printf("PV: %d\n", positiontemp); //Testing Purposes
            for(int y = 0; positiontemp != (keystr[y] - 65); ++y ) //Takes temp variable and runs through dsckeystr.
            {
                alphatemp = alphatemp + 1; // Adds up to give place in string value
                //printf("AT: %d\n", alphatemp); // Testing Purposes
            }
            dscestr[x] = alphabetstr[alphatemp];//Puts value found for for decryption into string
            alphatemp = 0;// Reintialises value to zero for reuse.   
        }
    }    
    
    printf("%s\n", dscestr); //Print result
    return 0;
    }
