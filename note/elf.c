init_elf_binfmt
load_elf_binary -> kernel_read
struct linux_binprm {
typedef struct elf32_hdr{
flush_old_exec
exec_mmap -> mmdrop -> find_vma
create_elf_tables
sys_exec -> search_binary_handler -> load_elf_binary -> start_thread
