#include <scheduler.h>

#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

namespace zaolahma
{
    void Scheduler::registerTask(std::unique_ptr<Task> task)
    {
        std::cout<<"Registered task: "<<task->getTaskName()<<std::endl;
        mTasks.push_back(std::move(task));
    }

    /**
     * Overly ambitious scheduling thing, because why not.
     * 
     * TODO: 
     * Check which task should be scheduled when, and put
     * thread to sleep in some clever way given that 
     * information.
     */
    void Scheduler::run()
    {
        while(true)
        {
            uint64_t before =
                std::chrono::duration_cast<std::chrono::milliseconds>
                    (std::chrono::high_resolution_clock::now().time_since_epoch()).count();

            for (auto const& task : mTasks)
            {
                auto now = std::chrono::duration_cast<std::chrono::milliseconds>
                    (std::chrono::high_resolution_clock::now().time_since_epoch()).count();
                
                task->run(now);
            }
            
            uint64_t after =
                std::chrono::duration_cast<std::chrono::milliseconds>
                    (std::chrono::high_resolution_clock::now().time_since_epoch()).count();
        }
    }
}