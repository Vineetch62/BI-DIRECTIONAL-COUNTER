#include<reg51.h>
sbit sen1 = P1^0;
sbit sen2 = P1^1;
sbit rs = P1^2;
sbit rw = P1^3;
sbit en = P1^4;

void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void lcddisp(unsigned char *s, unsigned char r);
void lcdconv(unsigned char);

void lcddis(unsigned char *s, unsigned char r)
{
    unsigned char w;
    for(w=0; w<r; w++)
    {
        lcddat(s[w]);
        delay();
    }
}

void lcdcmd(unsigned char val)
{
    P2 = val;
    rs = 0;
    rw = 0;
    en = 1;
    delay();
    en = 0;
}

void lcddat(unsigned char dat)
{
    P2 = dat;
    rs = 1;
    rw = 0;
    en = 1;
    delay();
    en = 0;
}

void lcdconv(unsigned char num)
{
    unsigned char p, n;
    p = num / 10;
    n = num % 10;
    p = p + 0x30;
    n = n + 0x30;
    lcddat(p);
    lcddat(n);
}

void delay()
{
    unsigned int k, l, t;
    for(k = 0; k < 1000; k++);
    for(t = 0; t < 100; t++);
    for(l = 0; l < 100; l++);
}

void main()
{
    unsigned char x, y;
    lcdcmd(0x38);
    delay();
    lcdcmd(0x01);
    delay();
    lcdcmd(0x10);
    delay();
    lcdcmd(0x0c);
    delay();
    lcddis(" Welcome", 7);
    lcdcmd(0xc0);
    delay();
    lcddis("Visitor Counter", 15);
    delay();
    lcdcmd(0x01);
    delay();

    while(1)
    {
        if(sen1 == 0)
        {
            lcdcmd(0x80);
            delay();
            lcddis("Entry", 6);
            lcdcmd(0x87);
            delay();
            x = x + 1;
            lcdconv(x);
        }
        if(sen2 == 0)
        {
            lcdcmd(0xc0);
            lcddis("Exit", 5);
            lcdcmd(0xc6);
            delay();
            y = y + 1;
            lcdconv(y);
            delay();
        }
    }
}
