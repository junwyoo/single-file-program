#include <stdio.h>

bool g_flag = false;

void getCallerFunction(const char* func){
  fprintf(stdout, "I am %s\n",__func__);
  fprintf(stdout, "Called from %s\n",func);
}

namespace ns{

int main(const char* func){
  fprintf(stdout, "inside namespace!\nThis is %s\n",__func__);
  getCallerFunction(func);
  getCallerFunction(__func__);
  return 0;
}

}

void regularFunction(){
  ns::main(__func__);
}

int main() {
  fprintf(stdout, "hi!\n");
  
  if (g_flag){
    return 0;
  }
  else{
    g_flag=true;
    regularFunction();
    ns::main(__func__);
  }
}
