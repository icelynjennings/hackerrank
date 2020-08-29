#include <cstdio>
using namespace std;


int main() {
    const char * english[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
   
    long long n;
    scanf("%lld",&n);
    
    if (n <= 9) {
        printf("%s",english[n]);
    } else {
        printf("Greater than 9");   
    }

    return 0;
}