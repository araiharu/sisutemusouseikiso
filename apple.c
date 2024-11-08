int main()
{
    int k;
    printf("How many apples?");
    scanf("%d", &k);
    
    if (k >= 1000)
    {
        printf("There are many apples!");
    }
    
    else
    {
        printf("There are few apples!");
    }
    return 0;
}