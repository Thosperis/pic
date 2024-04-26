[Unit]
Description=TightVNC server
After=sshd.service

[Service]
Type=dbus
ExecStart=/usr/bin/tightvncserver :1
User=yourusername
Type=forking

[Install]
WantedBy=multi-user.target
