# Install Netdata on Synology

> This community-maintained guide may not reflect the latest changes.
> Please verify the installation steps before proceeding.
> 
> Help improve this guide by [submitting a PR](https://github.com/netdata/netdata/edit/master/packaging/installer/methods/synology.md) with your suggestions.
> Thank you!

The [one-line installation script](/packaging/installer/methods/kickstart.md) works on Synology NAS devices with amd64 architecture. The script installs Netdata to `/opt/netdata/`.

For current Synology systems (DSM 7.2.2+), the kickstart script automatically handles the complete installation process. Netdata runs as the `netdata` user and can be managed through standard systemd commands.

## Older systems

<details>
<summary>For DSM versions older than 7.2.2, additional configuration is required.</summary>

### Run as netdata user

By default, Netdata runs as `root` on older systems. To run it as the netdata user instead:

1. Create a `netdata` group through the Synology control panel (no special access needed)
2. Create a `netdata` user through the Synology control panel:
    - Assign it to the netdata group
    - Set a random password
    - Grant no access permission
3. Set correct ownership permissions:
    ```bash
    chown -R root:netdata /opt/netdata/usr/share/netdata
    chown -R netdata:netdata /opt/netdata/var/lib/netdata /opt/netdata/var/cache/netdata
    chown -R netdata:root /opt/netdata/var/log/netdata
    ````
4. Restart Netdata
    ```sh
    /etc/rc.netdata restart
    ```

### Create a Startup Script

Older DSM versions aren't automatically recognized during installation, so you'll need to create a startup script manually:

1. Create `/etc/rc.netdata` with [this script](https://gist.github.com/oskapt/055d474d7bfef32c49469c1b53e8225f).
2. Make it executable:
    ```sh
    chmod 0755 /etc/rc.netdata
    ```
3. Enable auto-start by adding to `/etc/rc.local`:
   ```sh
   # Netdata startup
   [ -x /etc/rc.netdata ] && /etc/rc.netdata start
   ```

</details>
