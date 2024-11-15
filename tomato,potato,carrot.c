#include <stdio.h>

int main(void)
{
    int tomato,potato,carrot;
    
    tomato =10;/*トマトの個数*/
    potato =20;/*ジャガイモの個数*/
    carrot =5;/*にんじんの個数*/
    
    /*変数と定数の比較*/
    if(tomato==10)printf("トマトは10個あります\n");
    if(potato!=10)printf("ジャガイモの個数は10個ではありません\n");
    if(potato>=10)printf("ジャガイモは10個以上あります\n");
    if(carrot<10)printf("にんじんの個数は5個未満です\n");
    
    /*変数と変数の比較*/
    if(tomato>carrot)printf("トマトはにんじんより多いです\n");
    if(potato>tomato)printf("ジャガイモはトマトより多いです\n");

    return 0;
}