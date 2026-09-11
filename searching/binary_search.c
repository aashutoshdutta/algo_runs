#include <stdio.h>

static int binary_search(const int arr[], int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void) {
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    int idx = binary_search(arr, n, target);
    if (idx >= 0) printf("found %d at index %d\n", target, idx);
    else printf("%d not found\n", target);

    return 0;
}
