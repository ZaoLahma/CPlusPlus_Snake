#ifndef INC_SCHEDULER_H
#define INC_SCHEDULER_H

#include <task.h>
#include <vector>
#include <memory>

namespace zaolahma
{

    class Scheduler
    {
        public:
        Scheduler() = default;

        void registerTask(std::unique_ptr<Task> task);

        void run();

        protected:
        std::vector<std::unique_ptr<Task>> mTasks;

        private:

    };

}

#endif