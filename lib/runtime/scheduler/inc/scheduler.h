#ifndef INC_SCHEDULER_H
#define INC_SCHEDULER_H

#include <task.h>
#include <vector>
#include <functional>

namespace zaolahma
{

    class Scheduler
    {
        public:
        Scheduler() = default;

        void registerTask(Task& task);

        void run() const;

        protected:
        std::vector<std::reference_wrapper<Task>> mTasks;

        private:

    };

}

#endif