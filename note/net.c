rtl8169_netdev_ops
rtl8169_start_xmit
rtl8169_alloc_rx_data
rtl8169_init_ring
rtl8169_rx_fill
Rx_databuff
rtl8169_rx_interrupt -> netif_receive_skb -> netif_rx
netif_rx -
 *	This function receives a packet from a device driver and queues it for
 *	the upper (protocol) levels to process.  It always succeeds. The buffer
 *	may be dropped during processing for congestion control or by the
 *	protocol layers.
enqueue_to_backlog softnet_data.input_pkt_queue
recvfrom -> __sock_recvmsg_nosec
(goto-line 137 (find-file-noselect "~/source/linux/linux-2.6.39.4/include/linux/net.h"))
socket.proto_ops
(goto-line 44 (find-file-noselect "~/source/glibc/glibc-2.13/sysdeps/unix/sysv/linux/i386/socket.S"))
socketcall -> sys_socket -> __sock_create -> inet_create -> sk_alloc
inetsw_array -> udp_prot -> udp_recvmsg
net_families
sock_register
inet_init -> inet_family_ops -> inet_stream_ops, inet_dgram_ops -> inet_recvmsg
sk_alloc -> sk->sk_prot
wait_for_packet -> sk_sleep
net_dev_init
sock_def_wakeup, sock_def_readable
sk->sk_data_ready, sock_queue_rcv_skb
sock_init_data
rtl8169_poll -> napi_complete -> napi_gro_flush -> napi_gro_complete ->
      __netif_receive_skb -> deliver_skb-> ip_packet_type -> ip_rcv
ip_rcv_finish (struct sk_buff *skb)
eth_header (struct sk_buff *skb)
skb_dst_set, dev_set_promiscuity, packet_setsockopt
__netpoll_rxm
__netif_receive_skb -> deliver_skb -> ip_packet_type -> ip_rcv
rtl8169_rx_interrupt -> napi_gro_receive
