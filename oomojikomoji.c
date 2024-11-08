int main(void)
{
    int diff;
    char Large;/*大文字*/
    char Small;/*小文字*/
    
    printf("アルファベットの小文字を入力してください>>>" );
    scanf( "%c", &Small );
    diff= 'A' - 'a';/* 'a'と'A'の文字の差　*/
    Large=Small+diff; /* 大文字に変換　*/
    
    printf( "小文字は%c 大文字は%c\n",Small,Large);
    

    return 0;
}