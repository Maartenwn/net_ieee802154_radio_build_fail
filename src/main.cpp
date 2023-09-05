/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/net/ieee802154_radio.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>

static const struct device* const radio_dev =
    DEVICE_DT_GET(DT_CHOSEN(zephyr_ieee802154));
/// Callback from the net stack zephyr to receive IEEE802.15.4 packets.
int net_recv_data(struct net_if* iface, struct net_pkt* pkt)
{
    return 0;
}

enum net_verdict ieee802154_radio_handle_ack(struct net_if* iface,
                                             struct net_pkt* pkt)
{
    return NET_CONTINUE;
}

int main(void)
{
	return 0;
}
