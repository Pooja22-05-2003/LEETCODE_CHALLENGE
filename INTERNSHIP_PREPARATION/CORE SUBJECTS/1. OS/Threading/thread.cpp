#include <iostream>
#include <thread> // This includes the C++ standard thread library, which provides classes and functions to create and manage threads.
#include <unistd.h> // This includes the POSIX header file that provides access to various system services, including the sleep function.
using namespace std; // This line allows you to use symbols from the std (standard) namespace without explicitly qualifying them with std::.

void taskA(){
    for(int i=0;i<10;i++){
        sleep(1); // This function call pauses the execution of the thread for the specified number of seconds (in this case, 1 second). It's used to simulate a time-consuming task. 
        cout<<"TaskA:"<<i<<endl;
        fflush(stdout); //  This function call pauses the execution of the thread for the specified number of seconds (in this case, 1 second). It's used to simulate a time-consuming task.


    }
}

void taskB(){
    for(int i=0;i<10;i++){
        sleep(1); // // explain this ? 
        cout<<"TaskB:"<<i<<endl;
        fflush(stdout); //  This function call pauses the execution of the thread for the specified number of seconds (in this case, 1 second). It's used to simulate a time-consuming task.


    }
}


int main(){
    thread t1(taskA);
    thread t2(taskB);

    // these are basically 3 threads , one main thread is divided into 2 threads
    // so we need to call join so that main waits for completion if these 2 threads
    t1.join(); 
    t2.join();
    return 0;
}

