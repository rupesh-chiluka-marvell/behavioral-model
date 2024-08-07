/* Copyright 2024 Marvell Technology, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Rupesh Chiluka (rchiluka@marvell.com)
 *
 */


#ifndef PNA_NIC_PNA_INTERNETCHECKSUM_H_
#define PNA_NIC_PNA_INTERNETCHECKSUM_H_

#include <bm/bm_sim/extern.h>

namespace bm {

namespace pna {

class PNA_InternetChecksum : public bm::ExternType {
 public:

    BM_EXTERN_ATTRIBUTES {
}

    void init() override;

    void get(Field &dst) const;

    void get_verify(Field &dst, Field &equOp) const;

    void clear();

    void add(const std::vector<Field> &fields);

    void subtract(const std::vector<Field> &fields);

    void get_state(Field &dst) const;

    void set_state(const Data &src);

 private:
    uint16_t sum;

};

}  // namespace bm::pna

}  // namespace bm
#endif
