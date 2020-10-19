/*
 * Copyright (C) 2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file zel_tracing_libddi.cpp
 * Perhaps have this generated at some point.
 *
 */
#include "ze_lib.h"
#include "layers/zel_tracing_ddi.h"

namespace ze_lib
{
    ///////////////////////////////////////////////////////////////////////////////
    __zedlllocal ze_result_t context_t::zelTracingInit()
    {
        ze_result_t result = ZE_RESULT_SUCCESS;

        if( ZE_RESULT_SUCCESS == result )
        {
            auto getTable = reinterpret_cast<zel_pfnGetTracerApiProcAddrTable_t>(
                GET_FUNCTION_PTR(loader, "zelGetTracerApiProcAddrTable") );
            result = getTable( ZE_API_VERSION_1_0, &zelTracingDdiTable.Tracer);
        }

        return result;
    }
} // namespace ze_lib