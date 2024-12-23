#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <fstream>
#include <mutex>
using namespace std;

mutex threadMutex;

void WriteThreadFile(int threadID)
{
    auto now = chrono::system_clock::now();
    time_t timeNow = chrono::system_clock::to_time_t(now);

    string messageThread = "Поток: " + to_string(threadID) + " Время: " + ctime(&timeNow) + "\n";

    lock_guard<mutex> lock(threadMutex);

    ofstream file("outFile.txt", ios::app);

    file << messageThread;
}

int main()
{
    thread thread1(WriteThreadFile,1);
    thread thread2(WriteThreadFile,2);
    thread thread3(WriteThreadFile,3);

    thread1.join();
    thread2.join();
    thread3.join();

    cout << "Done";
}