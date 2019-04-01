#pragma once

#include <string>

#include "sentinel-core/slot/base/slot.h"

namespace Sentinel {
namespace Slot {

class StatsSlot : public Slot {
  public:
    virtual ~StatsSlot() = default;
    /*
     * Statistics class slot default always continue the rest of the slot
     */
    bool IsContinue(const TokenResult& token) override {
      last_token_result_ = token;
      return true;
    }

    const std::string& Name() const override {
      static constexpr std::string name = "StatsSlot";
      return name;
    }

  protected:
    const TokenResult& LastTokenResult() { return last_token_result_; }
    TokenResult last_token_result_;
};

}  // namespace Slot
}  // namespace Sentinel