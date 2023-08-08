#include <iostream>
#include <vector>
using namespace std;

int solution(int N, vector<int>& A, vector<int>& B) {
    int arr[N] = {0};
    int arr1[A.size() + 1] = {0};
    int sum = 0;
    int temp = N;

    for (int i = 0; i < A.size(); i++) {
        arr[A[i] - 1]++;
        arr[B[i] - 1]++;
    }

    for (int i = 0; i < N; i++) {
        arr1[arr[i]]++;
    }

    for (int i = A.size(); i > 0; i--) {
        sum += ((2 * temp * arr1[i] - arr1[i] * arr1[i] + arr1[i]) / 2) * i;
        temp -= arr1[i];
    }
    return temp;
}

int main() {
    // Sample usage
    int N = 6;
    vector<int> A = {1, 2, 2, 3, 4};
    vector<int> B = {2, 3, 4, 4, 5};

    int result = solution(N, A, B);
    cout << "Result: " << result << endl;

    return 0;
}
