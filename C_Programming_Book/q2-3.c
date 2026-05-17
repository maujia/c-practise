#include <stdio.h>

/*htoi, convert string of hexadecimal digits into integer values*/
int main(){
    char c;
    int first = 1;
    int second = 1;
    int current_total = 0;

    while((c=getchar()) != EOF && c != '\n'){
        if(first && c == '0')
            first = 0;    
        else if(second && c == 'x')
            second = 0;
        else{
            // convert from ascii to hex then to dec
            if (c >= 'A' && c <= 'F') //letters - keeping them all in lower case
                c += 'a' - 'A';
    
            if(('a' <= c && c <= 'f'))
                current_total = (current_total*16) + (c - 'a' + 10);
          
            if (('0' <= c && c <= '9'))
                current_total = (current_total*16) + (c - '0');
        }

    }

    printf("0x%d\n", current_total);

    return 0;
}