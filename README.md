# Mbed RemoteIR library

This repository contains a port of [RemoteIR by Shinichiro Nakamura](https://os.mbed.com/users/shintamainjp/code/RemoteIR/) to Mbed CE.

## How to start
1. Create a new project according to [MbedCE instructions](https://github.com/mbed-ce/mbed-os/wiki)
2. Add this as submodule to your project via `git submodule add --depth 1 https://github.com/mbed-ce-libraries-examples/RemoteIR RemoteIR`
3. The top level `CMakeList.txt` (in root of your project) should be modified according to [this wiki page](https://github.com/mbed-ce/mbed-os/wiki/MbedOS-configuration#libraries-in-your-application)

## Example code
For an example of how to use it, see the [example project](https://github.com/mbed-ce/RemoteIR-test-program).

## Description
For an overview of the hardware and software, see Shinichiro's [cookbook page](https://os.mbed.com/cookbook/IR) and the [notebook page](https://os.mbed.com/users/shintamainjp/notebook/remote_ir_en/).
