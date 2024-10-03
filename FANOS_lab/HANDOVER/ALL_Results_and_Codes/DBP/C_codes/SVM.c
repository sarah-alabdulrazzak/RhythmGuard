#include <string.h>
#include<sys/time.h>
double Pred = 0.0;

void SVM(int n, double *input, double *output){

struct timeval st, et;
gettimeofday(&st,NULL);





Pred = ((((56.686357528960585) + ((input[0]) * (0.35999704397909754))) + ((input[1]) * (-0.6007258723980116))) + ((input[2]) * (4.246642485646495))) + ((input[3]) * (0.129723223901564));




//PredictBP(input);
gettimeofday(&et,NULL);
double elapsed = ((et.tv_sec - st.tv_sec) * 1000000) + (et.tv_usec - st.tv_usec);
output[1] = elapsed; 
output[0] = Pred;
}