# LSGi
Large Scale Graph inference
### Overview
Iterative graph processing has emerged as a necessary and powerful tool at the heart of solutions to several large scale analytics problems 
such as malware detection, genome analysis, IoT and online advertising. Due to the large amount of communication involved, iterative graph processing on large graphs does not scale well on distributed systems. 
To demonstrate the benefits of a memory driven computing architecture, we designed and implemented an iterative graph processing engine 
that uses The Machine’s Fabric-attached-memory as a communication medium.

We construct an iterative graph processing engine exploiting The Machine’s Fabric-attached-memory as a communication medium, and
demonstrate near-linear scalability and a 162 speed-up over today’s state of the art graph processing system on a SuperdomeX
and a projected 85 speed up on the Machine Fabric Testbed (MFT).

The engine takes a graph and associated metadata as input and performs the following computation. Each vertex is
associated with a state variable. The state variable is updated iteratively based on the states of the neighboring
vertices as well as the metadata associated with the graph until convergence is achieved.

### Main Contributors 
Fei Chen, Tere Gonzalez, Krishna Viswanathan, Hernan Laffite, Quiong Cai, Janneth Rivera

### Acknowledgements
We thank our colleagues Brad Morrey, Terence Kelly, Hideaki Kumura, Jun Li and Rob Schneider for their support understanding memory mappings, libpmem library interfaces, and CPU optimization techniques.  Thanks to Qiong Cai who developed the model to estimate performance on The Machine based on performance on SuperdomeX statistics. Thanks to Greg Pearson and Alex Jizrawi for testing and evaluating LSGi on The Machine Fabric Test bed(MFT) and The Machine Simulator(TMAS). Thanks to Ram Swaminathan, April Mitchel and Sharad Singhal for their management support.

### References 
"Billion node graph inference: iterative processing on The Machine",HPE Techical Report, 2016,
URL:https://www.labs.hpe.com/publications/HPE-2016-101"

### More Info
- LSGi System Architeture
- Demo Video

