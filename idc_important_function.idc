#include <idc.idc>
//_PE_reboot_on_panic
static about() {
  Message("Developed by Haifisch\n");
  Message("Script Version: 1.0\n");
}

static main() {
  about();
  auto symb;
  symb = LocByName("_PE_parse_boot_argn");
  if (symb == BADADDR) {
    Message("Couldn't find _PE_parse_boot_argn() in this database\n");
    return;
  }
  Message("_PE_parse_boot_argn() is at %X\n", symb);

  symb = LocByName("_PE_i_can_has_debugger");
  if (symb == BADADDR) {
    Message("Couldn't find _PE_i_can_has_debugger() in this database\n");
    return;
  }
  Message("_PE_i_can_has_debugger() is at %X\n", symb);

  symb = LocByName("_PE_reboot_on_panic");
  if (symb == BADADDR) {
    Message("Couldn't find _PE_reboot_on_panic() in this database\n");
    return;
  }
  Message("_PE_reboot_on_panic() is at %X\n", symb);

  symb = LocByName("_PE_enter_debugger");
  if(symb == BADADDR){
    Message("Couldn't find _PE_enter_debugger() in this database");
    return;
  }
  Message("_PE_enter_debugger() is at %X\n", symb);
}
