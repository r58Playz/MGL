/*
 * Copyright (C) Michael Larson on 1/6/2022
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * compute.c
 * MGL
 *
 */

#include "glm_context.h"


void mglDispatchCompute(GLMContext ctx, GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    ERROR_CHECK_RETURN(num_groups_x < ctx->state.var.max_compute_work_group_size[0], GL_INVALID_VALUE);
    ERROR_CHECK_RETURN(num_groups_y < ctx->state.var.max_compute_work_group_size[1], GL_INVALID_VALUE);
    ERROR_CHECK_RETURN(num_groups_z < ctx->state.var.max_compute_work_group_size[2], GL_INVALID_VALUE);

    ctx->mtl_funcs.mtlDispatchCompute(ctx, num_groups_x, num_groups_y, num_groups_z);
}

void mglDispatchComputeIndirect(GLMContext ctx, GLintptr indirect)
{
        assert(0);
}

