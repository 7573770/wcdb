/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FactoryRestorer_hpp
#define FactoryRestorer_hpp

#include <WCDB/Assembler.hpp>
#include <WCDB/FactoryDerived.hpp>
#include <WCDB/Progress.hpp>

namespace WCDB {

namespace Repair {

class FactoryRestorer : public FactoryDerived {
public:
    using FactoryDerived::FactoryDerived;
    typedef Progress::ProgressUpdateCallback ProgressUpdateCallback;

    bool work(std::shared_ptr<Assembler> &assembler,
              const ProgressUpdateCallback &onProgressUpdated);
};

} //namespace Repair

} //namespace WCDB

#endif /* FactoryRestorer_hpp */