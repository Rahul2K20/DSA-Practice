#include<iostream>

using namespace std;

int largestSubArraySum(int arr[], int n) {
  int prefix[n];
  prefix[0] = arr[0];

  for (int i = 1; i < n; i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  int largestSum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int SubArraySum = i>0 ? prefix[j] - prefix[i - 1] : prefix[j];

      largestSum = max(SubArraySum, largestSum);
    }
  }

  return largestSum;

}

int main() {
  int arr[] = {-2,3,4,-1, 5,-12,6,1,3};
  int n = sizeof(arr) / sizeof(int);
  cout << largestSubArraySum(arr, n);
  return 0;
}
