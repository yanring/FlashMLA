#pragma once

#include "params.h"

namespace sm100::prefill::sparse_fwd_d576::head128 {

template<int D_QK>
void run_fwd_phase1_kernel(const SparseAttnFwdParams& params);

}
