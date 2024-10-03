
#include <string.h>
#include<sys/time.h>
double Pred = 0.0;

void LR(int n, double *input, double *output){

struct timeval st, et;
gettimeofday(&st,NULL);





Pred = ((((60.67427724178421) + ((input[0]) * (0.3606044871255133))) + ((input[1]) * (-0.6079161599047799))) + ((input[2]) * (5.288794853937413))) + ((input[3]) * (0.10022027021259827));




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
