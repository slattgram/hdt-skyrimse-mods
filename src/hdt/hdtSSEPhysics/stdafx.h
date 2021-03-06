// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>



// TODO: 在此处引用程序需要的其他头文件
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <atomic>
#include <thread>
#include <mutex>
#include <memory>

#include <intrin.h>

#if !defined(DEBUG) && !defined(_DEBUG)
#define NDEBUG
#endif

#include <cassert>

#include <btBulletCollisionCommon.h>
#include <btBulletDynamicsCommon.h>
#include <BulletDynamics\Dynamics\btDiscreteDynamicsWorldMt.h>
#include <LinearMath\btAabbUtil2.h>
#include <LinearMath\btMatrixX.h>

#include "../hdtSSEFramework/IString.h"

#define HDT_LOCK_GUARD(name, lock) std::lock_guard<decltype(lock)> name(lock)

