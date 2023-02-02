#include "main.h"

int main(){
    LinkedList<std::string> new_list;
    new_list.addFront("Kelvin");
    new_list.addFront("Jonh");
    new_list.addFront("Brad");
    new_list.addFront("David");
    new_list.addFront("James");
    new_list.addFront("Ryan");
    new_list.addFront("Blake");
    new_list.addFront("Matt");
    new_list.addFront("Charles");
    

    std::string penultimate_middle = new_list.penultimate();

}
