#ifndef INC_TASK_H
#define INC_TASK_H

#include <string>
#include <cstdint>

namespace zaolahma
{
    class Task
    {
        public:
        Task() = delete;
        Task(const std::string taskName, const uint16_t taskPeriodicityMS);

        std::string getTaskName();

        const uint16_t getTaskPeriodicity() const;

        void run(const uint64_t now);

        virtual void execute(const uint64_t now) = 0;

        protected:

        private:
        const std::string mTaskName;

        const uint16_t mTaskPeriodicityMS;
        uint64_t mPrevExecutionTime;
    };
}

#endif