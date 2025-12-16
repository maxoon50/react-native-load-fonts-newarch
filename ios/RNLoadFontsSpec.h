#pragma once

#ifdef RCT_NEW_ARCH_ENABLED
#include <ReactCommon/TurboModule.h>

namespace facebook::react {

class JSI_EXPORT NativeRNLoadFontsSpecJSI : public ObjCTurboModule {
public:
  NativeRNLoadFontsSpecJSI(const ObjCTurboModule::InitParams &params);
};

} // namespace facebook::react
#endif
