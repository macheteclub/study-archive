#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> A, B;

void printArray() {
    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N-1) cout << " ";
    }
    cout << "\n";
}

void mergeSort(int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high) {
        if (A[j] < A[i]) {
            B[k++] = A[j++];
        } else {
            B[k++] = A[i++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= high) {
        B[k++] = A[j++];
    }
    for (int idx = low; idx <= high; idx++) {
        A[idx] = B[idx];
    }

    printArray();
}

int main() {
    cin >> N;

    A.resize(N);
    B.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    mergeSort(0, N-1);
}