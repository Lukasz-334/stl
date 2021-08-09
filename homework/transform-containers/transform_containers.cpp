#include "transform_containers.hpp"

std::pair<int, std::string> func(int x, std::string y) {
    return std::make_pair(x, y);
}

std::map<int, std::string> removeDuplicateAndTranformToMap(std::list<std::string> list_s, std::deque<int> deque_int) {
    std::map<int, std::string> map_int_string;
   
    list_s.sort();
    auto last = std::unique(list_s.begin(), list_s.end());
    list_s.erase(last, list_s.end());

    sort(deque_int.begin(), deque_int.end());
    auto last2 = std::unique(deque_int.begin(), deque_int.end());
    deque_int.erase(last2, deque_int.end());
     
    if(list_s.size()==deque_int.size()){
    std::transform(begin(deque_int), end(deque_int), begin(list_s), std::inserter(map_int_string, map_int_string.end()), func);  
    }
    else{
        std::cout<<"wrong container size "<<std::endl;
    }
    return map_int_string;
}