// Q8. Cinema
//  A program to deal with the day-to-day administration of bookings for a Cinema for a single day. Each
//  day there are three separate performances. An early afternoon performance at 1pm, an early evening
//  performance at 5pm, and the main performance at 8.30pm. The program should be able to handle the
//  booking of cinema seats for any of these three performances and supply details about the remaining
//  seats for a particular performance.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    int seat = 100;
    int seatno = 1;
    cout<<"enter the show you want : \n1 for early afternoon performance at 1pm\n2 for an early evening performance at 5pm\n3 for the main performance at 8.30pm\n"<<endl;
    cin>>choice;
    if (choice == 1){
        seat = seat -1;
        cout<<"you successfully booked your seat.\nyour seat no. is "<<seatno<<endl;
        cout<<""
        seatno = seatno + 1;
    }
    else if (choice == 2){
        seat = seat -1;
        cout<<"you successfully booked your seat.\nyour seat no. is "<<seatno<<endl;
        seatno = seatno + 1;
    }
    else if (choice == 3){
        seat = seat -1;
        cout<<"you successfully booked your seat.\nyour seat no. is "<<seatno<<endl;
        seatno = seatno + 1;
    }
    else {
        cout<<"enter valid input";
    }

    return 0;
}
