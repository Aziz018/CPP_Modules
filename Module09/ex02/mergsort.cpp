// #include <iostream>
// #include <vector>
// #include <cstdlib>  // for rand() and srand()
// #include <ctime>    // for time()

// // Merge two sorted subvectors: arr[left..mid] and arr[mid+1..right]
// void merge(std::vector<int>& arr, int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     // Temporary vectors
//     std::vector<int> L(n1);
//     std::vector<int> R(n2);

//     // Copy data into L[] and R[]
//     for (int i = 0; i < n1; ++i)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; ++j)
//         R[j] = arr[mid + 1 + j];

//     // Merge the temp vectors back into arr
//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j])
//             arr[k++] = L[i++];
//         else
//             arr[k++] = R[j++];
//     }

//     // Copy remaining elements of L[]
//     while (i < n1)
//         arr[k++] = L[i++];

//     // Copy remaining elements of R[]
//     while (j < n2)
//         arr[k++] = R[j++];
// }

// // Recursive merge sort
// void mergeSort(std::vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         // Sort left and right halves
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         // Merge the sorted halves
//         merge(arr, left, mid, right);
//     }
// }

// void printVector(const std::vector<int>& vec) {
//     for (int i = 0; i < static_cast<int>(vec.size()); ++i)
//         std::cout << vec[i] << " ";
//     std::cout << std::endl;
// }

// bool isSorted(const std::vector<int>& arr) {
//     for (size_t i = 0; i < arr.size() - 1; ++i) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     std::vector<int> arr;

//     const int SIZE = 30;

//     std::srand(static_cast<unsigned int>(std::time(0)));

//     for(size_t i = 0; i < SIZE; ++i) {
//         arr.push_back(std::rand() % SIZE + 1);  // Range [1, SIZE]
//     }

//     std::cout << "Original vector: ";
//     printVector(arr);

//     mergeSort(arr, 0, arr.size() - 1);

//     std::cout << "Sorted vector:   ";
//     printVector(arr);

//     if (isSorted(arr)) {
//         std::cout << "The vector is sorted ^_^" << std::endl;
//     } else {
//         std::cout << "The vector is not sorted :(" << std::endl;
//     }

//     return 0;
// }
