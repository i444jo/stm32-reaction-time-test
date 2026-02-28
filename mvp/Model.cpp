#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include <stdint.h>
#include "cmsis_os.h"

extern "C"
{
	extern osMessageQueueId_t myQueue02Handle;
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	uint32_t reactionTime;

	 while(osMessageQueueGet(myQueue02Handle, &reactionTime, NULL, 0) == osOK){
	        if(modelListener){
	            modelListener->updateReactionTime(reactionTime);
	        }
	 }
}
