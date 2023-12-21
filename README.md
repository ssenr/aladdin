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
