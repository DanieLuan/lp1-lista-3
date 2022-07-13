#include <iostream>
#include <vector>

//busca binária recursiva
int binarySearch(int* nums, int target, int left, int right){
    if(left > right){
        return -1;
    }
    int mid = (left+right)/2;
    if(target < nums[mid]){
        return binarySearch(nums, target, left, mid-1);
    } else if(target > nums[mid]){
        return binarySearch(nums, target, mid+1, right);
    }else{
        return mid;
    }
}

int main(){
    int size = 10;
    int vec[size];
    for(int i = 0; i < size; i++){
        vec[i] = i;
    }
    
    std::cout << "Vector to be used: \n{ ";
    for(int i = 0; i < size; i++){
        std::cout << vec[i] << " ";
    }
    std::cout << "}" << std::endl;
    
    
    std::cout << "Looking for 3. Output:  "<< binarySearch(vec, 3, 0, size-1) << std::endl;
    std::cout << "Looking for 2. Output:  "<< binarySearch(vec, 2, 0, size-1) << std::endl;
    std::cout << "Looking for 11. Output: "<< binarySearch(vec, 11, 0, size-1) << std::endl;
    std::cout << "Looking for 10. Output: "<< binarySearch(vec, 10, 0, size-1) << std::endl;
    return 0;
}