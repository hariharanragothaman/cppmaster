#pragma once

#include "bits/stdc++.h"
#include <thread>
#include <atomic>

class Watchdog
{
public:
    Watchdog();
    Watchdog(unsigned int milliseconds, std::function<void()> callback);
    ~Watchdog();

    void Start(unsigned int milliseconds, std::function<void()> callback);
    void Stop();
    void Pet();

private:
    unsigned int _interval;
    std::atomic<unsigned int> _timer;
    std::atomic<bool> _running;
    std::thread _thread;
    std::function<void()> _callback;

    void Loop();
};