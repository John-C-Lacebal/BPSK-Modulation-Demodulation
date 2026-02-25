/* Include files */

#include "BPSKModDemod_cgxe.h"
#include "m_xaoNfuAHulBhcPnJx8eYv.h"

unsigned int cgxe_BPSKModDemod_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 520064191 &&
      ssGetChecksum1(S) == 3278353356 &&
      ssGetChecksum2(S) == 1216175934 &&
      ssGetChecksum3(S) == 1990116517) {
    method_dispatcher_xaoNfuAHulBhcPnJx8eYv(S, method, data);
    return 1;
  }

  return 0;
}
