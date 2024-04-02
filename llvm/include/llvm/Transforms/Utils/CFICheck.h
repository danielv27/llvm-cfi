#ifndef LLVM_TRANSFORMS_UTILS_CFICHECK_H
#define LLVM_TRANSFORMS_UTILS_CFICHECK_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class CFICheckPass : public PassInfoMixin<HelloWorldPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_UTILS_CFICHECK_H
