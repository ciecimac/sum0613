//
//  main.c
//  sum0613
//
//  Created by clm on 2017/6/13.
//  Copyright © 2017年 clm. All rights reserved.
//


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//s2016110119//Desktop//sum0613//input.txt","r+");
    fw=fopen("//Users//s2016110119//Desktop//sum0613//output.txt","w");
    int a,b,c;
    fscanf(fr,"%d%d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
