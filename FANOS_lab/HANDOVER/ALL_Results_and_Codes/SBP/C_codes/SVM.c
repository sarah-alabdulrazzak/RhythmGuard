#include <string.h>
#include<sys/time.h>
double Pred = 0.0;

void SVM(int n, double *input, double *output){

struct timeval st, et;
gettimeofday(&st,NULL);





Pred = ((((143.05439401951136) + ((input[0]) * (5.911293431291468))) + ((input[1]) * (-0.5550946936005202))) + ((input[2]) * (3.0943081254409917))) + ((input[3]) * (-0.2732708063447189));




//PredictBP(input);
gettimeofday(&et,NULL);
double elapsed = ((et.tv_sec - st.tv_sec) * 1000000) + (et.tv_usec - st.tv_usec);
output[1] = elapsed; 
output[0] = Pred;
}