#include <stdio.h>

int main(){
    
    char c;
    int lim = 1000;
    int i;
    char s[lim];
    /* This loop below must be rewritten without any use of "&&" or "||" */
    /*
    for (int i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c; 
    */
    enum loop {NO, YES};
    enum loop stay_in = YES;
    /*Rewritten loop*/
    while(stay_in == YES){
        if(i >= lim-1)
            stay_in = NO;
        else if((c=getchar()) == '\n')
            stay_in = NO;
        else if(i == EOF)
            stay_in = NO;
        else {   
            s[i] = c;
            i++;    
        }
    }
}