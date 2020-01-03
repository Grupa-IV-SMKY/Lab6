#ifndef DZIELENIE_INCLUDED
#define DZIELENIE_INCLUDED

void dziel(float a,float b)
{
    if(b==0)
    {
        printf("Dzielenie przez 0, obliczanie pominiete");
    }else
    {
        printf("%f", a/b);
    }
}

#endif // DZIELENIE_INCLUDED
