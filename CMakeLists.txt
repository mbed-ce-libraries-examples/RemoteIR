add_library(RemoteIR 
    ReceiverIR.cpp
	TransmitterIR.cpp)
target_link_libraries(RemoteIR mbed-core-flags)
target_include_directories(RemoteIR PUBLIC .)