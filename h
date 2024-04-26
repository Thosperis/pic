[Unit]
Description=TightVNC server
After=syslog.target network.target

[Service]
Type=forking
User=yourusername
PAMName=login
PIDFile=/home/yourusername/.vnc/%H:%i.pid
ExecStartPre=-/usr/bin/vncserver -kill :%i > /dev/null 2>&1
ExecStart=/usr/bin/tightvncserver :%i -geometry x -depth y -localhost no -rfbauth /home/yourusername/.vnc/passwd
ExecStop=/usr/bin/vncserver -kill :%i

[Install]
WantedBy=multi-user.target
