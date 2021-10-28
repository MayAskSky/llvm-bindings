#pragma once

#include <napi.h>

#include "IR/LLVMContext.h"
#include "IR/Module.h"
#include "IR/Type.h"
#include "IR/IntegerType.h"
#include "IR/PointerType.h"
#include "IR/FunctionType.h"
#include "IR/StructType.h"
#include "IR/ArrayType.h"
#include "IR/Value.h"
#include "IR/User.h"
#include "IR/Instruction.h"
#include "IR/AllocaInst.h"
#include "IR/BranchInst.h"
#include "IR/CallInst.h"
#include "IR/InvokeInst.h"
#include "IR/LoadInst.h"
#include "IR/ReturnInst.h"
#include "IR/ResumeInst.h"
#include "IR/SwitchInst.h"
#include "IR/StoreInst.h"
#include "IR/LandingPadInst.h"
#include "IR/UnreachableInst.h"
#include "IR/PHINode.h"
#include "IR/Constant.h"
#include "IR/ConstantInt.h"
#include "IR/ConstantFP.h"
#include "IR/ConstantExpr.h"
#include "IR/ConstantPointerNull.h"
#include "IR/ConstantStruct.h"
#include "IR/GlobalValue.h"
#include "IR/GlobalObject.h"
#include "IR/GlobalVariable.h"
#include "IR/Function.h"
#include "IR/FunctionCallee.h"
#include "IR/Argument.h"
#include "IR/BasicBlock.h"
#include "IR/IRBuilder.h"
#include "IR/DataLayout.h"
#include "IR/Verifier.h"
#include "IR/Intrinsic.h"

void InitIR(Napi::Env env, Napi::Object &exports);