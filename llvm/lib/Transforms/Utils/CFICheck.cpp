#include "llvm/Transforms/Utils/CFICheck.h"

using namespace llvm;

PreservedAnalyses CFICheckPass::run(Function &F,
                                      FunctionAnalysisManager &AM) {
  errs() << F.getName() << "\n";
  return PreservedAnalyses::all();
}
