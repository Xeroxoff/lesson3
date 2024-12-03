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
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::cout << "Maximum value: " << findMax(nums) << std::endl;
    return 0;
}
