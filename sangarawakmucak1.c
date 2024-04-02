#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int twoStacks(int maxSum, int a[], int n, int b[], int m) {
    int sum_stack_a[n + 1];
    int sum_stack_b[m + 1];

    sum_stack_a[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum_stack_a[i] = sum_stack_a[i - 1] + a[i - 1];
    }

    sum_stack_b[0] = 0;
    for (int i = 1; i <= m; i++) {
        sum_stack_b[i] = sum_stack_b[i - 1] + b[i - 1];
    }
   
   int max_count = 0;
    int j = m;

    for (int i = 0; i <= n; i++) {
        if (sum_stack_a[i] > maxSum) {
            break;
        }

        while (j > 0 && sum_stack_a[i] + sum_stack_b[j] > maxSum) {
            j--;
        }

        max_count = max(max_count, i + j);
    }

    return max_count;
}

int main() {
    int g;
    scanf("%d", &g);
    
    for (int t = 0; t < g; t++) {
        int n, m, maxSum;
        scanf("%d %d %d", &n, &m, &maxSum);
        
        int a[n];
        int b[m];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        
        printf("%d\n", twoStacks(maxSum, a, n, b, m));
    }

    return 0;
}