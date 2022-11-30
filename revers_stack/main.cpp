#include<iostream>
#include<vector>
#include<stack>


int main(){

    std::vector<int> arr{1,2,3,4,5,6,53,321};
    std::stack <int> st_arr;
    
    for(int i = 0; i < arr.size(); ++i){
        st_arr.push(arr[i]);
    }
    while(!st_arr.empty()){               
        std::cout<<st_arr.top()<< " ";
        st_arr.pop();
    }
    std::cout<<std::endl;

}