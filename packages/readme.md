[#]: # (GPL3 logos)
[GPL3_big_text]: https://www.gnu.org/graphics/gplv3-with-text-136x68.png
[GPL3_little_text]: https://www.gnu.org/graphics/gplv3-with-text-84x42.png
[GPL3_big]: https://www.gnu.org/graphics/gplv3-127x51.png
[GPL3_little]: https://www.gnu.org/graphics/gplv3-88x31.png

[#]: # (Application logos)
[application_logo]: https://raw.githubusercontent.com/TonyWhite/C.H.A.O.S./master/media/img/cypher-gtk.svg?sanitize=true
[application_logo_plain]: https://raw.githubusercontent.com/TonyWhite/C.H.A.O.S./master/media/img/cypher-gtk-plain.svg?sanitize=true
[application_logo_outline]: https://raw.githubusercontent.com/TonyWhite/C.H.A.O.S./master/media/img/cypher-gtk-outline.svg?sanitize=true

[#]: # (OS logos)
[linux_logo]: https://icongr.am/devicon/linux-original.svg?size=96
[archlinux_logo]: https://icongr.am/material/arch.svg?size=96&color=0090ff
[debian_logo]: https://icongr.am/devicon/debian-original.svg?size=96
[fedora_logo]: https://icongr.am/material/fedora.svg?size=96&color=00295D
[windows_logo]: https://icongr.am/devicon/windows8-original.svg?size=96
[macOS_logo]: https://icongr.am/devicon/apple-original.svg?size=96
[android_logo]: https://icongr.am/devicon/android-original.svg?size=96
[cloud_icon]: https://icongr.am/material/cloud-outline.svg?size=96

[#]: # (Status package)
[verified_package_icon]: https://icongr.am/octicons/verified.svg?size=24&color=00AA00
[beta_package_icon]: https://icongr.am/octicons/unverified.svg?size=24&color=FFAA00
[coming_soon_package_icon]: https://icongr.am/octicons/clock.svg?size=24&color=00AAFF
[no_package_icon]: https://icongr.am/octicons/circle-slash.svg?size=24&color=AA0000

# C.H.A.O.S. ~ All Packages

## Select OS

|**Logo**|![archlinux_logo]|![debian_logo]|![fedora_logo]|![windows_logo]|![macOS_logo]|![macOS_logo]|![android_logo]|![cloud_icon]|
|:---|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|**Name**|**Arch Linux**|**Debian**|**Fedora**|**Windows**|**macOS**|**iOS**|**Android**|**Web App**|
|**File format**|.pkg.tar.xz|.deb|.rpm|.exe|.dmg|.ipa|.apk|.html|
|**32 bit**|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|
|**64 bit**|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|
|**ARM**|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![coming_soon_package_icon]<br>coming soon|![no_package_icon]<br>not available|
|**WASM**|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![coming_soon_package_icon]<br>coming soon|
|**Backdoor**|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![no_package_icon]<br>not available|![verified_package_icon]<br>OS level|![verified_package_icon]<br>OS level|![verified_package_icon]<br>OS level|![verified_package_icon]<br>OS level|![beta_package_icon]<br>Closed Browsers|

### Next goal

* Create a CPU architecture independent application. With Javascript is possible?<br>
Short andwer: No.<br>
Long answer: Yes, with [GJS](https://gitlab.gnome.org/GNOME/gjs) and [Electron](https://www.electronjs.org/). But I don't want to depend on third-party projects.
* Create an OS independent source code. With C++ is possible?<br>
Yes, using standard C++ libraries.
* Can I use C++ source to build Android app? Yes.