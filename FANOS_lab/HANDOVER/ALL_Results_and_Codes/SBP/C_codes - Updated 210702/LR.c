
#include <string.h>
#include<sys/time.h>
double Pred = 0.0;

void LR(int n, double *input, double *output){

struct timeval st, et;
gettimeofday(&st,NULL);





Pred = ((((144.7595952135736) + ((input[0]) * (5.560476637951604))) + ((input[1]) * (-0.8371734744260986))) + ((input[2]) * (-0.4882855887343618))) + ((input[3]) * (-0.22598764128164273));




//PredictBP(input);
gettimeofday(&et,NULL);
double elapsed = (1000*(et.tv_sec - st.tv_sec) * 1000000) + (1000*et.tv_usec - 1000*st.tv_usec);
output[1] = elapsed; 
output[0] = Pred;
}


//=============
//void PredictBP(double *input) {
//	Pred = ((((144.7595952135736) + ((input[0]) * (5.560476637951604))) + ((input[1]) * (-0.8371734744260986))) + ((input[2]) * (-0.4882855887343618))) + ((input[3]) * (-0.22598764128164273));
//}
