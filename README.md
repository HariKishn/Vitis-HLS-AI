# Vitis HLS Journey 🔧

> Documenting my path from C++ basics to deploying neural networks on FPGAs with AMD Vitis HLS and Vitis AI.

**Goal:** Edge AI inference on FPGAs — automotive, medical, industrial applications.  
**Timeline:** 6–8 months, starting 2025.  
**Status:** 🟡 Phase 1 — C/C++ fundamentals (in progress)

---

## Why this path?

Most people learning AI stop at PyTorch and cloud APIs. I wanted to go further — all the way down to the hardware. FPGAs offer deterministic, ultra-low-latency inference that GPUs and CPUs can't match for certain edge applications.

The engineers who can bridge AI and FPGA hardware are rare. This repo is my attempt to become one of them.

---

## Roadmap

| Phase | Topic | Status |
|-------|-------|--------|
| 1 | C basics → C++ fundamentals | 🟡 In progress |
| 2 | C++ for Vitis HLS (`ap_fixed`, `ap_int`, pragmas) | ⬜ Upcoming |
| 3 | Python basics | ⬜ Upcoming |
| 4 | Python ML libraries (NumPy, pandas) | ⬜ Upcoming |
| 5 | Deep learning with PyTorch | ⬜ Upcoming |
| 6 | Vitis HLS kernel design | ⬜ Upcoming |
| 7 | Vitis AI deployment | ⬜ Upcoming |

---

## Repo structure

```
vitis-hls-journey/
├── 01-cpp/
│   ├── basics/          # Variables, loops, functions, arrays
│   ├── oop/             # Classes, inheritance, templates
│   └── hls-cpp/         # HLS-specific C++: ap_int, ap_fixed, pragmas
│
├── 02-python/
│   ├── basics/          # Python fundamentals
│   ├── ml-libs/         # NumPy, pandas, matplotlib
│   └── pytorch/         # Neural network training
│
├── 03-vitis/
│   ├── hls-kernels/     # HLS accelerator designs
│   ├── pragmas/         # Pragma experiments and observations
│   └── vitis-ai/        # Quantisation, model deployment
│
├── projects/            # 9 milestone projects across the journey
├── resources.md         # Key docs, papers, AMD links
└── learning-log.md      # Dated notes and breakthroughs
```

---

## Milestone projects

1. Matrix multiply kernel in Vitis HLS
2. FIR filter with HLS pragmas
3. Custom fixed-point neural network layer
4. MNIST inference on FPGA
5. *(more added as journey progresses)*

---

## Learning log

Dated notes from each session live in [`learning-log.md`](./learning-log.md).  
The messy, honest version of learning — not cleaned up tutorials.

---

## Tools & environment

- **C/C++:** Code::Blocks + MinGW (Windows)
- **Python:** VS Code + Python 3.14 (Windows)
- **Target platform:** AMD Vitis HLS, Vitis AI (Vitis Unified Platform)
- **Cloud:** AWS F1 instances (planned)
- **Reference:** [AMD Vitis AI GitHub](https://github.com/Xilinx/Vitis-AI)

---

## Follow along

Progress updates on X → [@yourhandle](https://twitter.com/yourhandle)  
Hashtags: `#FPGA` `#VitisHLS` `#VitisAI`

---

*This repo is a learning journal, not a polished project. Expect rough edges, corrections, and honest notes on what confused me.*
