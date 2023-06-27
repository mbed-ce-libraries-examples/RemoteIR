/**
 * IR remote common class (Version 0.0.4)
 *
 * Copyright (C) 2010 Shinichiro Nakamura (CuBeatSystems)
 * http://shinta.main.jp/
 */

#ifndef _REMOTE_IR_H_
#define _REMOTE_IR_H_

#include <mbed.h>

namespace RemoteIR {

    enum Format {
        UNKNOWN,
        NEC,
        NEC_REPEAT,
        AEHA,
        AEHA_REPEAT,
        SONY
    };

    const std::chrono::microseconds TUS_NEC = 562us;
    const std::chrono::microseconds TUS_AEHA = 425us;
    const std::chrono::microseconds TUS_SONY = 600us;

};

#endif
