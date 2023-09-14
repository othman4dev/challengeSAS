#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, d, e;
    printf("Entrer les valeurs a, b et c \n ax^{2}+by+c  : a =");
    scanf("%f", &a);
    printf("\n ax^{2}+by+c  : b =");
    scanf("%f", &b);
    printf("\n ax + by + c  : c =");
    scanf("%f", &c);
    d = 4*a*c;
    e = b*b;
    float delta = e-d;
    int delta1 = delta;
    printf("Le Delta = %.2d\n",delta1);
    if (delta1 < 0) {
        printf ("Delta est negatif\n Pas de solution");
    } else if (delta1 == 0) {
        float s1;
        s1 = -b / 2*a;
        printf("Delta = 0 \n La solution est :%.2f", s1);
    } else if (delta1 > 0) {
        float s1,s2,f,g;
        f = sqrtf(delta1);
        g = 2*a;
        s1 = (0 - b - f) / g;
        s2 = (0 - b + f) / g;
        printf("Delta > 0 \n Les solution sont :%.2f et %.2f", s1,s2);
    }
}