
#ifndef _TRACE_MANAGER_H_
#define _TRACE_MANAGER_H_


#define TRACE_SAVE_FORMAT_SAM_FILE 0      /**save all the trace print in one file**/
#define TRACE_SAVE_FORMAT_DIF_FILE 1      /**save trace in different file for each enabled module**/

#define TRACE_SAVE_FORMAT_DEFAULT TRACE_SAVE_FORMAT_SAM_FILE

struct trace_manager
{
  


};

int trace_module_register();

int trace_module_unregister();

int trace_print(int id,int level,...);






#endif
