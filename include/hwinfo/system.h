// Copyright Leon Freist
// Author Leon Freist <freist@informatik.uni-freiburg.de>

#pragma once

#include <hwinfo/cpu.h>
#include <hwinfo/disk.h>
#include <hwinfo/gpu.h>
#include <hwinfo/ram.h>

#include <string>
#include <vector>

namespace hwinfo {

class System {
 public:
  System() = default;

  std::vector<CPU>& CPUs() const;
  std::vector<GPU>& GPUs() const;
  std::vector<Disk>& Disks() const;
  std::vector<Memory>& RAMs() const;

 private:
  std::vector<CPU> _cpuSockets;
  std::vector<GPU> _gpus;
  std::vector<Disk> _disks;
  std::vector<Memory> _ramBars;
};

}  // namespace hwinfo
