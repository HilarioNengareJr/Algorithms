#include<iostream>

#include <string>


void tower_of_hanoi(int disk_num, std::string original, std::string final_dest, std::string temp); //Function Prototype 

int main()

{

        int disks = 3; // Initial number of disks on rod 1

        tower_of_hanoi(disks, "beginning", "final", "temporary");

        return 0;

}

//Declaration of number disks, and 3 rods : original, final_dest(ends up here) and temporary variable  

void tower_of_hanoi(int disk_num, std::string original, std::string final_dest, std::string temp)

{

        if (disk_num == 0) // Base condition to halt recursion 

        {

                return;

        }

        tower_of_hanoi(disk_num - 1, original, temp, final_dest); // recursive function

        //Feedback statement we moved small disk to third rod, for the meantime 

        std::cout << "\nDISK " << disk_num << " MOVED FROM " << original << " TO " << final_dest << std::endl;

        tower_of_hanoi(disk_num - 1, temp, final_dest, original); // recursive function

}
