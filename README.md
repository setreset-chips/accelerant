# Accelerant
## Steps to run
Make sure you have `verilator`

```shell
cd tests
make
```


## Reconfigurable PE Design

Each PE is given an "instruction" that configures it. Once it has been configured, it stays in that state until it is reconfigured. The PE has a small register that is used primarily for Systolic Computations. The PE is connected to a switch


## Switch Design

The Switch is "programmed" using a configuration instruction. Here is an example:

1. The instruction is a total of 45 bits. It contains a 8 bit path that directs the configuration instruction to a PE. The instruction is in a "VLIW"-ish format.
2. Given a 8 bit "path" of 0b100000000, use the instruction and the data in the rest of the 45 bit instruction to program the current PE
3. Otherwise, send the instruction to the (South if 0, East if 1), and shift the 8 bit path th the left by 1.

4. Given the switch state, the functional units send their output based on the `output_flag`, and get their inputs from the `port_sampler`

5. The switch then programs the functional unit, which carries out the operation no matter what the data is
