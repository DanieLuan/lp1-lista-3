#include <iostream>
#include <vector>

void print(std::vector<int> vec){
    std::cout << "{ ";
    for(size_t i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << "}" << std::endl;
}

void insertSort(std::vector<int> &vec, int value){
    int left = 0;
    int right = vec.size()-1;
    int mid;
    while(left <= right){
        mid = (left+right+1)/2;
        if(vec[mid] < value){
            left = mid+1;
        } else if(vec[mid] > value) {
            right = mid-1;
        } else {
            vec.insert(vec.begin()+mid, value);
            return;
        }
    }
    if(value > vec[vec.size()-1]){
        vec.insert(vec.begin()+mid+1, value);
    } else {
        vec.insert(vec.begin()+mid, value);
    }
}

int main(){
    std::vector<int> vec = {0, 1, 2, 3, 4, 6, 7, 9};
    int num;
    std::cin >> num;
    print(vec);
    insertSort(vec,num);
    print(vec); 
    return 0;
}