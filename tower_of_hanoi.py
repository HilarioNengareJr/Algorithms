def tower_of_hanoi(disk_num, original, final_dest, temp):
    if disk_num == 0:
        return  # if there are no more disks on the initial rod, halt recursion
    tower_of_hanoi(disk_num - 1, original, temp, final_dest)  # move the n-1th disk to temp
    print(f"Disk {disk_num} moved from {original} to {final_dest}.\n")  # give feedback to user
    tower_of_hanoi(disk_num - 1, temp, final_dest, original)


def main():
    tower_of_hanoi(3, 'first rod', 'final rod', 'temporary rod')


if __name__ == main():
    main()  # execute main()
