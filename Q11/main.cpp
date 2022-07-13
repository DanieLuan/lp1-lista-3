#include <iostream>
#include <vector>

//busca binária iterativa
int binarySearch(std::vector<int> nums, int target){
    int left = 0;
    int right = nums.size()-1;

    while(left < right){
        int mid = (left+right)/2;

        if(nums[mid] < target){
            left = mid+1;
        } else if(nums[mid] > target) {
            right = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main(){
    std::vector<int> vec = {0, 1, 4, 6, 8, 9, 10, 13};

    std::cout << binarySearch(vec, 11) << std::endl;
    return 0;
}