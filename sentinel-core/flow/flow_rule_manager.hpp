#pragma once

#include <vector>
#include <string>
#include <unordered_map>

#include <flow/flow_rule.hpp>

namespace Sentinel {
namespace Flow {

class FlowRuleManager {
public:
    FlowRuleManager() = delete;

    static bool LoadRules(std::vector<FlowRule>& rules);
    static bool HasRules(std::string& resource);
    static std::vector<FlowRule> GetRules();
private:
    static std::unordered_map<std::string, std::vector<FlowRule>> rule_map_;
};

}
}