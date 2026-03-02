#include <iostream>

#include "h/general.hpp"

//#include "h/vmcore.hpp"
//#include "h/vmcpu.hpp"
#include "h/vmflag.hpp"
//#include "h/vminst.hpp"
#include "h/vminstphsr.hpp"
#include "h/vmmem.hpp"
//#include "h/vmport.hpp"
#include "h/vmreg.hpp"

//#undef ALPHA

/* arg0: is_protected mode (0: default disable, 1: enable)



*/
int main( int argc, char *argv[] ) {
	#ifdef ALPHA
	std::cout << "This is Alpha version." << std::endl;
	#endif

	if ( argv[1] > 0 ) {// enable protected mode
		#undef VMCPU_DISABLE_PROTECTION_MODE;
		goto vmSetProtectedModeAfterInit;
	}

vmSetProtectedModeAfterInit:
	// init vmcore with default values

	return VM_PROCESS_EXIT_CODE_SUCCESS;
}