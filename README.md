# aladdin

# Deps
-   Selenium
-   more.

# TO-DO 
## Wireshark
-   [x] Capture Soundcloud packets from CDN
-   [x] Decrypt packets from CDN
-   [x] Concatenate audio (ffmpeg)
-   [x] Check type of encryption used for audio packets
-   [x] Decrypt using taken session keys

## Other
-   [ ] Capture keys related to our own music session (Not anything else concurrently)
-   [ ] Automate song download process with CURL
-   [ ] Sniff packets from Soundcloud APIv2 and specify audio files
-   [ ] Possiby Automate browser opening and API Request
-   [ ] Validate URL's being sent

## Rewrite
Due to complexity, will probably write in Python first, then do a re-write in C.

# Tests
[Song](https://soundcloud.com/combat_vent/glotio)

# Notes
Diffie Hellman
-   Have acess to both private and public keys.
-   Can gain access to second private key through public key (diffie hellman calculation)

Other
-   Capturing session keys probably will probably be a result

# Resources
[TLS on Wireshark Wiki](https://gitlab.com/wireshark/wireshark/-/wikis/TLS#using-the-pre-master-secret)

## Understanding TLSv1.3
[David Wong: TLSv1.3 Part 1](https://www.youtube.com/watch?v=m8cRCACNz-A)
[David Wong: TLSv1.3 Part 2](https://www.youtube.com/watch?v=-BjXxJxcKOA)
[David Wong: TLSv1.3 Part 3](https://www.youtube.com/watch?v=HLssuFSgok8)

[Transport Layer Security](https://www.youtube.com/watch?v=AlE5X1NlHgg)
[Diffie-Hellman](https://www.youtube.com/watch?v=NmM9HA2MQGI)
