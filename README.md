# Firmware Sources

This repository contains the QMK / Vial **source files** for firmware we created or modified ourselves.

## Repository layout

- `qmk/`  → source folders as they should appear under `keyboards/0xcb/` in the **QMK** repo
- `vial/` → source folders as they should appear under `keyboards/0xcb/` in the **Vial (vial-qmk)** repo

## Build it yourself

### QMK

https://docs.qmk.fm/newbs_getting_started#setting-up-your-qmk-environment

1) Clone QMK:
   https://github.com/qmk/qmk_firmware

2) Copy the desired keyboard folder from this repo into:
   qmk_firmware/keyboards/0xcb/<keyboard_name>/

3) Build:
   `qmk compile -kb 0xcb/<keyboard_name> -km default`

### Vial

https://get.vial.today/docs/porting-to-vial.html#1-prepare-your-build-environment

1) Clone Vial-QMK:
   https://github.com/vial-kb/vial-qmk

2) Copy the desired keyboard folder from this repo into:
   vial-qmk/keyboards/0xcb/<keyboard_name>/

3) Build:
   `qmk compile -kb 0xcb/<keyboard_name> -km vial`

## Precompiled firmware

Grab ready-to-flash `.hex` / `.uf2` files here:
https://files.keeb.supply/firmware

## Notes

- Only firmwares **compiled by us** are represented here with their matching sources.
- PRs for fixes or improvements (layouts, keymaps, Vial support) are welcome.

## Contact

Support: support@keeb.supply

Website: https://keeb.supply
