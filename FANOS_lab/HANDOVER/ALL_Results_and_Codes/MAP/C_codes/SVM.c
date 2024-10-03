#include <string.h>
#include<sys/time.h>
double Pred = 0.0;

void SVM(int n, double *input, double *output){

struct timeval st, et;
gettimeofday(&st,NULL);





Pred = ((((89.85790229572412) + ((input[0]) * (1.7695206999411308))) + ((input[1]) * (-1.2966408657670996))) + ((input[2]) * (6.1761283672330025))) + ((input[3]) * (0.04543533205033455));




//PredictBP(input);
gettimeofday(&et,NULL);
double elapsed = ((et.tv_sec - st.tv_sec) * 1000000) + (et.tv_usec - st.tv_usec);
output[1] = elapsed; 
output[0] = Pred;
}