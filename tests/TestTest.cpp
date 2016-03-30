/*
 * Copyright 2015 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "Test.h"

#if SK_SUPPORT_GPU
#include "GrContext.h"
#include "gl/GLContext.h"
#endif


// This is an example of a normal test.
DEF_TEST(TestNormal, reporter) {
    REPORTER_ASSERT(reporter, reporter);
}

// This is an example of a GPU test that uses common GrContextFactory factory to do the test.
#if SK_SUPPORT_GPU
DEF_GPUTEST(TestGpuFactory, reporter, factory) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, factory);
}
#endif

// This is an example of a GPU test that tests a property that should work for all GPU contexts.
// Note: Some of the contexts might not produce a rendering output.
#if SK_SUPPORT_GPU
DEF_GPUTEST_FOR_ALL_CONTEXTS(TestGpuAllContexts, reporter, context) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, context);
}
#endif

// This is an example of a GPU test that tests a property that should work for all GPU contexts that
// produce a rendering output.
#if SK_SUPPORT_GPU
DEF_GPUTEST_FOR_RENDERING_CONTEXTS(TestGpuRenderingContexts, reporter, context) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, context);
}
#endif

// This is an example of a GPU test that tests a property that should work at least for the native
// GPU context. If the test takes a long time to run, it may be appropriate to test only the native
// context.
#if SK_SUPPORT_GPU
DEF_GPUTEST_FOR_NATIVE_CONTEXT(TestGpuNativeContext, reporter, context) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, context);
}
#endif

// This is an example of a GPU test that tests a property that uses the null GPU context.  It should
// be used if the test tests some behavior that is mocked with the null context.
#if SK_SUPPORT_GPU
DEF_GPUTEST_FOR_NULL_CONTEXT(TestGpuNullContext, reporter, context) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, context);
}
#endif

// This is an example of a GPU test that tests a property that should work for all GPU contexts.
// It uses the additional GLContext* glContext to implement the test.
#if SK_SUPPORT_GPU
DEF_GPUTEST_FOR_ALL_CONTEXTS(TestGpuGrContextAndGLContext, reporter, context, glContext) {
    REPORTER_ASSERT(reporter, reporter);
    REPORTER_ASSERT(reporter, context);
    REPORTER_ASSERT(reporter, glContext);
}
#endif
