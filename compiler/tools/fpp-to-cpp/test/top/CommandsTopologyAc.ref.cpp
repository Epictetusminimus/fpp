// ======================================================================
// \title  CommandsTopologyAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Commands topology
// ======================================================================

#include "CommandsTopologyAc.hpp"

namespace M {


  // ----------------------------------------------------------------------
  // Component instances
  // ----------------------------------------------------------------------

  C c1(FW_OPTIONAL_NAME("c1"));

  C c2(FW_OPTIONAL_NAME("c2"));

  // ----------------------------------------------------------------------
  // Helper functions
  // ----------------------------------------------------------------------

  void initComponents(const TopologyState& state) {
    c1.init(InstanceIds::c1);
    c2.init(InstanceIds::c2);
  }

  void setBaseIds() {
    c1.setIdBase(BaseIds::c1);
    c2.setIdBase(BaseIds::c2);
  }

  void regCommands() {
    c1.regCommandsSpecial();
    c2.regCommands();
  }

  // ----------------------------------------------------------------------
  // Setup and teardown functions
  // ----------------------------------------------------------------------

  void setup(const TopologyState& state) {
    initComponents(state);
    setBaseIds();
    regCommands();
  }

  void teardown(const TopologyState& state) {

  }

}
