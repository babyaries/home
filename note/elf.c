init_elf_binfmt
load_elf_binary -> kernel_read
struct linux_binprm {
typedef struct elf32_hdr{
flush_old_exec
exec_mmap -> mmdrop -> find_vma
create_elf_tables
sys_exec -> search_binary_handler -> load_elf_binary -> start_thread
get_page_from_freelist -> buffered_rmqueue
node_zonelist
init_bootmem
mem_init
zone_sizes_init
free_area_init_nodes contig_page_data
alloc_node_mem_map, __alloc_bootmem_node_nopanic, (slub) kzalloc_node, memblock_find_region
在__alloc_memory_core_early中已经用了phys_to_virt
