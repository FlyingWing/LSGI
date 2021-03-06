/**LSGi *�� Copyright 2017  Hewlett Packard Enterprise Development LP

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.�
*/

/*
 * CUSTOM Malloc macros
 * where created to encapsulate the allocations
 * for inference data structures.
 *
 * Custom allocation method can be implemented
 * to allocation using NUMA allocations, or DRAM
 * This method allows to keep the same implementation
 * with no need to change other part of the code.
 *
 * Main methods implemented:
 *
 * 1. allocation: customMalloc
 * 2. free: customFree
 * */


#ifndef CUSTOMMALLOC_H
#define CUSTOMMALLOC_H

#define NUMAALLOC 0
#define customMalloc(size,numaNodeId) 	\
		malloc(size);					\

#define customFree(ptr,size)			\
		free(ptr);

#endif/* CUSTOMMALLOC_H_ */
