//
//  Header.h
//  libmalloc
//
//  Created by wqa on 2018/11/30.
//

#ifndef EXTRA_CONST_DEFINE_H
#define EXTRA_CONST_DEFINE_H
#define	_COMM_PAGE_PHYSICAL_CPUS		(_COMM_PAGE_START_ADDRESS+0x035)	// uint8_t number of physical CPUs
#define _COMM_PAGE64_BASE_ADDRESS		(0xfffffff0001fc000ULL) /* Just below the kernel, safely in TTBR1 */
#define _COMM_PAGE_START_ADDRESS		_COMM_PAGE64_BASE_ADDRESS
#define _COMM_PRIV_PAGE64_BASE_ADDRESS	(_COMM_PAGE64_BASE_ADDRESS - (4096))
#define	_COMM_PAGE_MEMORY_SIZE			(_COMM_PAGE_START_ADDRESS+0x038)	// uint64_t max memory size */
#define _COMM_PAGE_NCPUS			(_COMM_PAGE_START_ADDRESS+0x022)	// uint8_t number of configured CPUs
#define	_COMM_PAGE_LOGICAL_CPUS			(_COMM_PAGE_START_ADDRESS+0x036)	// uint8_t number of logical CPUs
#define DEBUG_MALLOC 	1
#endif /* EXTRA_CONST_DEFINE_H */
