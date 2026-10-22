#include <stdio.h>


void nagpur();
void delhi();
void bombay();

void bombay() {
    printf("i am in bombay\n");
}

void delhi() {
    printf("i am in delhi\n");
    bombay(); 
}

void nagpur() {
    printf("i am in nagpur\n");
    delhi();
}

int main() {
    
    nagpur(); 
    return 0;
}
