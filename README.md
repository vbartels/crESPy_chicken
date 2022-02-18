# crESPy_chicken
mod a simple chinese chicken door with esp for home automation.


Based on this howto from makesmart:
https://makesmart.net/esp8266-wlan-relais/

Changed the output to the internal LED and inverted it. Placing the internal LED directly on the light sensor of the chicken doors electronic.

Im using a "Model T50 Chicken Door" "Chicken Run" like those:
https://de.aliexpress.com/item/1005003651631016.html?spm=a2g0o.productlist.0.0.110f68cahcF2l6&algo_pvid=0a9dbefd-5c74-4f89-9d80-fa634c5f579d&algo_exp_id=0a9dbefd-5c74-4f89-9d80-fa634c5f579d-3&pdp_ext_f=%7B%22sku_id%22%3A%2212000026655279819%22%7D&pdp_pi=-1%3B22.56%3B-1%3B-1%40salePrice%3BEUR%3Bsearch-mainSearch

https://de.aliexpress.com/item/1005003319485080.html?spm=a2g0o.productlist.0.0.110f68cahcF2l6&algo_pvid=0a9dbefd-5c74-4f89-9d80-fa634c5f579d&aem_p4p_detail=2022021800481915902060638965000108065501&algo_exp_id=0a9dbefd-5c74-4f89-9d80-fa634c5f579d-4&pdp_ext_f=%7B%22sku_id%22%3A%2212000025190176740%22%7D&pdp_pi=-1%3B18.41%3B-1%3B257%40salePrice%3BEUR%3Bsearch-mainSearch

https://de.aliexpress.com/item/1005003467842949.html?spm=a2g0o.productlist.0.0.110f68cahcF2l6&algo_pvid=0a9dbefd-5c74-4f89-9d80-fa634c5f579d&aem_p4p_detail=2022021800481915902060638965000108065501&algo_exp_id=0a9dbefd-5c74-4f89-9d80-fa634c5f579d-9&pdp_ext_f=%7B%22sku_id%22%3A%2212000027140539463%22%7D&pdp_pi=-1%3B21.16%3B-1%3B-1%40salePrice%3BEUR%3Bsearch-mainSearch

https://de.aliexpress.com/item/1005003304856369.html?spm=a2g0o.productlist.0.0.110f68cahcF2l6&algo_pvid=0a9dbefd-5c74-4f89-9d80-fa634c5f579d&aem_p4p_detail=2022021800481915902060638965000108065501&algo_exp_id=0a9dbefd-5c74-4f89-9d80-fa634c5f579d-14&pdp_ext_f=%7B%22sku_id%22%3A%2212000025112275580%22%7D&pdp_pi=-1%3B16.36%3B-1%3B519%40salePrice%3BEUR%3Bsearch-mainSearch

using https://homebridge.io/ and the http-switch plugin: https://github.com/Supereg/homebridge-http-switch
