#include <cstdio>
#include <cstdlib>
using namespace std;


int main() {
    int n;
    scanf("%d",&n);
    
    int* numbers = (int*) malloc (sizeof(int) * n);
    
    for (int i = 0; i < n; i++) scanf("%d",&numbers[i]);
    for (int i = n-1; i >= 0; i--) printf("%d ",numbers[i]);
    
   
    return 0;
}