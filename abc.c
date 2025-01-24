#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int intelligence=(rand()%20)+1;
    
    printf("intelligence=%d",intelligence);
    
    srand(time(0));
    
    int stamina=(rand()%20-intelligence)+1;
    
    printf("stamina=%d",stamina);
    
    int a,b,charisma;
    
    a=intelligence;
    b=stamina;
    charisma=20-a+b;
    
    printf("charisma=%d\n",charisma);
    
    if (intelligence>=stamina&&intelligence>=charisma){
    
    printf("mage\n");
    
    }else if(stamina>=intelligence&&stamina>=charisma){
        
    
    printf("knight\n");
    
    }else{ 
    
    printf("thief\n");
    }

    return 0;
}