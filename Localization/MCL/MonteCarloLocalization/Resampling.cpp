// This part is not used but shows a way of resampling
//One out of many possible solutions
//Suppose that you have 5 particles, each with an importance weight.
//Compute the probability of drawing each particle in the new set. 

#include <iostream>
using namespace std;
double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };
double sum = 0;
void ComputeProb(double w[], int n)
{
    for (int i = 0; i < n; i++) {
        sum = sum + w[i];
    }
    for (int j = 0; j < n; j++) {
        w[j] = w[j] / sum;
        cout << "P" << j + 1 << "=" << w[j] << endl;
    }
}
//int main()
//{
//    ComputeProb(w, sizeof(w) / sizeof(w[0]));
//    return 0;
//}
// P1=0.1 P2=0.2 P3=0.4 P4=0.1 P5=0.2


