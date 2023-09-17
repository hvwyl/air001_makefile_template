# AIR001 Makefile project template
This repository is a template for the AIR001 Makefile project.

Please modify it according to your project.

```
air001_makefile_template
 ├─Core                         Project source code
 │  ├─Inc
 │  │  ├─air001xx_hal_conf.h    HAL configuration file.
 │  │  └─air001xx_it.h          Headers of the interrupt handlers.
 │  └─Src
 │     ├─air001xx_hal_msp.c     HAL MSP module.
 │     ├─air001xx_it.c          Interrupt Service Routines.
 │     └─main.c                 Main program body
 ├─Drivers                      Driver source code
 ├─AIR001xx_FLASH.ld            Linker script of AIR001
 ├─Makefile                     Project Makefile
 └─README.md
```

## Build it
Make sure you have deployed the ARM cross-compilation toolchain like gcc-arm-none-eabi.

Build it via the command below:
```
make
```

After the build, the `.bin` file, `.hex` file and `.elf` file will be in the `build` directory