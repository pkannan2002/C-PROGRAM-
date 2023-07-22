#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int unique;
        int found = 0;
        for (int i = 0; i < n; i++)
            {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }

            if (count == 1) {
                unique = arr[i];

                found = 1;
            }
        }

        if (found) {
            printf("%d\n", unique);
        }
    }

    return 0;
}
