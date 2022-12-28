# osdev
Apprentissage du fonctionnement d'un os 

Architecture: ![Generic badge](https://img.shields.io/badge/-x86%2F64-red)

Kernel: ![Generic badge](https://img.shields.io/badge/-Non--modular%20monolithic-blue)

## En cours :

- [x] Bootloader simple ![Generic badge](https://img.shields.io/badge/-Assembly-yellow)
- [x] Real Mode (16-bit) ![Generic badge](https://img.shields.io/badge/-Assembly-yellow)
- [x] GDT (Global Descriptor Table) ![Generic badge](https://img.shields.io/badge/-Assembly-yellow)
- [x] Protected Mode (32-bit) ![Generic badge](https://img.shields.io/badge/-Assembly-yellow)
- [x] Long Mode (64-bit) ![Generic badge](https://img.shields.io/badge/-Assembly-yellow)
- [x] Loading Kernel ![Generic badge](https://img.shields.io/badge/-C-brightgreen)
- [x] Driver VGA ![Generic badge](https://img.shields.io/badge/-C-brightgreen)
- [x] Interrupt (IDT/ISR) ![Generic badge](https://img.shields.io/badge/-Assembly-yellow) ![Generic badge](https://img.shields.io/badge/-C-brightgreen)
- [ ] Keyboard Input
- [ ] File System Manager (Probablement FAT16)
- [ ] Task Manager
- [ ] Shell

## Problème rencontré :

Pour l'instant mon problème est que je n'arrive pas à chargé le 10ème secteur (Dans boot.asm -> **mov cx, 0x000A** pourtant 000A = 10 donc je bloqué. Je recherche activement mon erreur mais si quelqu'un a une idée, elle est la bienvenue :) !
