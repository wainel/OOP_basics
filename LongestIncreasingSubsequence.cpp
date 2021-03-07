#include <iostream>
#include <vector>

using namespace std;

void calc_LIS(vector<int>& D){
    vector< vector<int> > L(D.size()); 
    L[0].push_back(D[0]);

    for(int i=1; i<D.size(); i++){  //N
        for(int j=0; j<i; j++){     //N
            if( (D[j] < D[i]) && (L[i].size() < L[j].size()+1) ){L[i]=L[j];}
        }
        L[i].push_back(D[i]);
    }
    for(auto x: L){
        prt(x);
    }
}

int main()
{
    int a[] = {3, 2, 6, 4, 5, 1};
    vector<int> arr(a, a + sizeof(a)/sizeof(a[0]));

    calc_LIS(arr);
}
// The complexity of this algorithm is O(N**2)
