#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;char code[] = "}-}-}-}-}-}-.##%##:####$-(E.%#%"
"9%#$$+##&$D.$%$$##$$#$$#$&%$%#$##%$#$$###$#$$#$##&#$$##/.$###$#$$"
"$###$###$$$$$&$"         "#$#$###"         "$$##$##$#$$$$$#$$##.."
"$%$%##$%$%$##"             "$$$"             "####$$$$%$##$$##$$$"
"$$$##$##$..#"               "#"               "%#########%##&###$"
"%#######$##"                                  "##%############$##"
"$##########"                                  "##.F##$_E####`}-}-"
"}-}-}-}~!~!"                                  "~!~!~!~!``````````"
"````!}]0}0`"                                  "`]})`*}}!}//}`````"
"``````}0]0}`"                                "````````}}`````````"
"````!}}]0}}0`]"                            "(``}(``}}}}}}}(`]}(``"
"}0``}``}(`a`]0`a"                        "0``}!}}}}``0}}}}}`}}}]`"
"`0]}}}}}]``]}`}}}}}"                  "})`}]``]!]`}}`0]```}`}}`}]"
"``-}]````0`}}`}`}}`}```"          "0]``}`}}`}}`}]``-`}```0!``0}!}"
"```0!~!~!~!~!~!~!SE9!~!!SE"     "9*~**ZSE4~4jjZES~!!SE9!~!!SE9*~*"
"*ZSEjjjj|jZE9~SSSSSSSj9ES~ZZ" "ZZZSSSSSEESEjSSSSSSSj9ES~ZZZZZSSSS"
"jjZE9"    "~(("    "((2((((((2((((((2(("      "((((2"      "((((("
"(2("       "("       "((((2(((((((((("          "(("          "(("
"<("                   "((2((2((-#<(("                          "("
"-#"                   "(((##((((22(("                          "2"
"((2"                 "((-#<(((-#(((##"                        "(("
"((<("               ;char o[2010] = {0,                      };char
p[2010]=           {0,};char s[200] =  {0,                  };short
mu [220] =      {0,};char sp=0; char ef = 0;              int sf = 1
;long fc = 0  ;long r=0;void gm() {for(int i=0          ;i<110; ++i
) {if(126 == code[540+i])mu[i] = 0;else mu[i] = (    code[540+i]-33)*4
+294;}for(int i=0;        i<110        ;++i) {mu[110+i] = (code[650+i]
-30)*50;}}void             m()           {for(int i=0; i<110; ++i) {
if(0 != mu[i]               )             Beep ( mu[ i ], mu[110+i]);
this_thread::                             sleep_for(chrono::milliseconds
(mu[110+i]));                             }ef =     1;}     void go()
{ int  oi = 0,                           ti= 0       ;       for(int
i=0; i<270; ++i                        ){while               (code[
i]-35) { o[ oi ]=                    32;--code[             i];++oi
;}if(33 == code[270                +ti]) { o[oi]=         10;++oi;}
else { if (126 != code          [ 270+ ti] ){ o[ oi]    =code[270+ti]-1
;++oi;}} ++ti;} }void u()    {while(!ef) {++fc;memcpy(p, o, 2010 );
for(int     i=0     ;i<100; ++i) {  if(s[i*2+1] > 0) {p[(s[i*2+1]-1
)*101+       s       [i*2]] = 42;++s[i*2+1];}}if(sf) {long rs = fc*
 1234L+             fc*r;sp = 100 == sp ? 0 : sp;for(int i=0; i<10;
i++) {r=(         ((rs = rs * 214013L + 2531011L) >> 16) & 0x7fff);
s [ sp*2]=i     *10 + r%8 + 1;s[sp*2+1] = 1;++sp;}sf = 0;} else {sf
= 1;} system( "cls" ); puts(p); this_thread :: sleep_for ( chrono::
milliseconds(1000));}}int main(){go();gm();thread ut(u);thread mt(m)
;ut.join();mt.join();}                          // Merry Christmas~~

