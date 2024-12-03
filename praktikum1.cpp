#include <iostream>
#include <vector>
#include <algorithm>

int findMax(const std::vector<int>& nums) {
    if (nums.empty()) {
        throw std::invalid_argument("The list is empty.");
    }
    return *std::max_element(nums.begin(), nums.end());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::cout << "Maximum value: " << findMax(nums) << std::endl;
    return 0;
}
