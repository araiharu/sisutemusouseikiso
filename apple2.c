int main()
{
    int k;
    printf("How many apples?");
    scanf("%d", &k);
    
    int j;
    printf("How many cars?");
    scanf("%d", &j);
    
    if (k >= 1000,j>=500)
    {
        printf("There are many apples and cars!");
    }
    
    else if(k >=1000,j <500)
    {
        printf("There are few apples!");
    }
    
    else if(k <1000,j >=500)
    {
        printf("There are few cars!");
    }
    
    else
    {
        printf("There are few apples and cars!");
    }
    
      
      
    return 0;
}