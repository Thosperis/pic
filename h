https://dl.google.com/linux/direct/chrome-remote-desktop_current_amd64.deb

DISPLAY= /opt/google/chrome-remote-desktop/start-host --code="4/0AeaYSHA-2vtz1VJPClx3ofru-to4QJMehaF3Gf_oN-pSlTUYlTRX2Ie8GAxwn2CsHhN3lA" --redirect-url="https://remotedesktop.google.com/_/oauthredirect" --name=$(hostname)
curl https://dl.google.com/linux/linux_signing_key.pub \
    | sudo gpg --dearmor -o /etc/apt/trusted.gpg.d/chrome-remote-desktop.gpg
echo "deb [arch=amd64] https://dl.google.com/linux/chrome-remote-desktop/deb stable main" \
    | sudo tee /etc/apt/sources.list.d/chrome-remote-desktop.list
sudo apt-get update
sudo DEBIAN_FRONTEND=noninteractive \
    apt-get install --assume-yes chrome-remote-desktop
