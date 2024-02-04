#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int sum_of_digits(int num) {
    int digit_sum = 0;
    while (num > 0) {
        digit_sum += num % 10;
        num /= 10;
    }
    return digit_sum;
}

int count_elements_with_sum_less_than_K(const std::vector<int>& arr, int K) {
    int count = 0;
    for (int num : arr) {
        if (sum_of_digits(num) < K) {
            count++;
        }
    }
    return count;
}

int main() {
     int N, K;
    std::cin >> N >> K;

    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int result = count_elements_with_sum_less_than_K(arr, K);
    std::cout << result << std::endl;
}