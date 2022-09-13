#include <task.h>

#include <iostream>

namespace zaolahma
{
    Task::Task(const std::string taskName, const uint16_t taskPeriodicityMS) 
    : mTaskName(taskName), mTaskPeriodicityMS(taskPeriodicityMS), mPrevExecutionTime(0)
    {
        std::cout<<"Task "<<mTaskName<<" created"<<std::endl;
    }

    const std::string Task::getTaskName() const
    {
        return mTaskName;
    }

    const uint16_t Task::getTaskPeriodicity() const
    {
        return mTaskPeriodicityMS;
    }

    void Task::run(const uint64_t now)
    {
        if ((now - mPrevExecutionTime) >= mTaskPeriodicityMS)
        {
            mPrevExecutionTime = now;

            execute(now);
        }
    }
}