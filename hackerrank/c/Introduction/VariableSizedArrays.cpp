#include <iostream>
using namespace std;

int main() {    
    int n, q;
    cin >> n >> q;

    int** sequences = new int*[n];

    int i = 0;
    while (n--) {
        int len;
        cin >> len;
        
        int* curr_sequence = new int[len];
        for (int j = 0; j < len; j++) {
            cin >> curr_sequence[j];
        }
        
        sequences[i] = curr_sequence;
        i++;
        
    }

    while (q--) {
        int seqidx;
        cin >> seqidx;
        int numidx;
        cin >> numidx;
        
        cout << sequences[seqidx][numidx] << endl;
        
    }

	return 0;
}
