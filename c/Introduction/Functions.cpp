#include <cstdio>

int max_of_four(int* array) {
    int max = array[0];
    
    for (int i = 0; i < 4; i++) {
        if (array[i] > max) {
            max = array[i];
        }
  
    }
    return max;      
}
int main() {
    int numbers[4];
    scanf("%d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3]);
    int ans = max_of_four(numbers);
    printf("%d", ans);
    
    return 0;
}