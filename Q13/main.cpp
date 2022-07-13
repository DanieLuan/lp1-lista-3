#include <iostream>
#include <vector>

void inssert(std::vector<int> vec, int value){
    for(size_t i = 0; i < vec.size(); i++){
        
    }
}

void print(std::vector<int> vec){
    std::cout << "Vector to be used: \n{ ";
    for(size_t i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << "}" << std::endl;
}
 
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

    print(vec);
    vec.insert(vec.begin()+1, 2);
    print(vec); 
    //std::cout << binarySearch(vec, 11) << std::endl;
    return 0;
}