#include<stdio.h>


int mxFunction(int a, int b, int c, int d){
    int mx;
    if(a>b)
         {
              if(a>c)
               {
                  if(a>d)
                   {
                      mx = a;
                    }
                  else
                   {
                      mx = d;
                    }
                }
           }
               else if(b>c)
                       {
                            if(b>d)
                              {
                                  mx = b;
                               }
                             else
                              {
                                  mx = d;
                              }
                        }
                else if(c>d)
                       {
                              mx = c;
                        }
               else
                {
                    mx = d;
                }
    return mx;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int gretest = mxFunction(a, b, c, d);
    printf("%d\n", gretest);
    return 0;
}


