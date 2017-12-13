#include <windows.h>
#include <chrono>
#include <thread>

typedef short datatype;

datatype freqs[] = {
294,494,440,392,294,0,294,    294,494,440,392,330,0,330,    330,523,494,440,370,0,370,    587,587,523,440,494,0,294,
294,494,440,392,294,0,294,    294,494,440,392,330,0,330,    330,523,494,440,587,587,587,587,    659,587,523,440,392,0,
494,494,494,494,494,494,    494,587,392,440,494,0,    523,523,523,523,523,494,494,494,494,    494,440,440,494,440,587,
494,494,494,494,494,494,    494,587,392,440,494,0,    523,523,523,523,523,494,494,494,494,    587,587,523,440,392,0
};

datatype dur[] = {
50,50,50,50,100,50,50,    50,50,50,50,100,50,50,    50,50,50,50,100,50,50,    50,50,50,50,100,50,50,
50,50,50,50,100,50,50,    50,50,50,50,100,50,50,    50,50,50,50,50,50,50,50,    50,50,50,50,150,50,
50,50,100,50,50,100,    50,50,75,25,150,50,    50,50,75,25,50,50,50,25,25,    50,50,50,50,100,100,
50,50,100,50,50,100,    50,50,75,25,150,50,    50,50,75,25,50,50,50,25,25,    50,50,50,50,150,50
};

unsigned char encoded[sizeof(freqs)/sizeof(datatype)*2] = {0,};
unsigned char data[] = "!SE9!~!!SE9*~**ZSE4~4jjZES~!!SE9!~!!SE9*~**ZSEjjjj|jZE9~SSSSSSSj9ES~ZZZZZSSSSSEESEjSSSSSSSj9ES~ZZZZZSSSSjjZE9~((((2((((((2((((((2((((((2((((((2((((((2((((((((((((((<(((2((2((-#<(((-#(((##((((22((2((2((-#<(((-#(((##((((<(";
datatype decoded[sizeof(encoded)] = {0,};

void encode() {
    for(int i=0; i<sizeof(freqs)/sizeof(datatype); ++i) {
        if(0 == freqs[i])
            encoded[i] = 126;
        else
            encoded[i] = (freqs[i]-294)/4+33;
    }
    for(int i=0; i<sizeof(dur)/sizeof(datatype); ++i) {
        encoded[sizeof(freqs)/sizeof(datatype) + i] = dur[i]/5 + 30;
    }

    // check
    for(int i=0; i<sizeof(encoded); ++i) {
        if(!(33 <= encoded[i] && encoded[i] <= 126)) {
            printf("failed\n");
            exit(-1);
        }
    }
    printf("success\n");
    printf("encoded:%s\n", encoded);
}

void decode() {
    int chunksize = sizeof(decoded)/sizeof(datatype)/2;
    for(int i=0; i<chunksize; ++i) {
        if(126 == data[i])
            decoded[i] = 0;
        else
            decoded[i] = (data[i]-33)*4+294;
    }

    for(int i=0; i<chunksize; ++i) {
        decoded[chunksize+i] = (data[chunksize+i]-30)*50;
    }
}

void m() {
    for(int i=0; i<110; ++i) {
        if(0 != decoded[i]) {
            Beep(decoded[i], decoded[110+i]);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(decoded[110+i]));
    }
}

int main() {
    encode();
    decode();
    m();
    return 0;
}
