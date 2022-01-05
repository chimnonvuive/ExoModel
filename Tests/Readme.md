# Test files and experimental setups for EPOS Motor Controller(s) from MATLAB on Windows Platform

# Requirements
* A PC/laptop with Windows OS (Tested on Windows 10 LTSC 1809)
* EPOS Studio (Tested with EPOS Studio 3.7 Revision 1)
* EPOS 4 Motor Controller
* MATLAB (Tested with R2020a)
* C++ Compiler (Tested with Microsoft Visual C++ 2019 (C) - Visual Studio 2019)

# How to use it
* Clone the repository `git clone git@github.com:HERMESTeamEU/EPOS-Libraries-for-MATLAB-Windows.git`
* Download and install the EPOS Studio - [Download Now](https://www.maxongroup.com/medias/sys_master/root/8942467743774/EPOS-2-4-IDX-Setup.zip)
* Start MATLAB R2020a
* Open the `./EPOS-Libraries-for-MATLAB-Windows` using MATLAB command window
* Run the following commands from MATLAB command window
    ```
    Clean
    Make
    ```
* Connect your EPOS 4 Motor Controller with USB
* Run the demo with the following command
    ```
    DemoEpos
    ```

# Limitation
* `EposCmd` library provided by Maxon group is only usable on Windows and Linux. For more information about real-time applications, please [contact Maxon group](https://support.maxongroup.com/hc/en-us/requests/new).
* This was a modified version by Iordanis Kostelidis <HERMES Team> for EPOS 4 Motor Controllers
* This is a modified version for Simulink implementation by Nguyen Quy Khoi, instructed by Dr. Nguyen Quoc Chi, PhD.

# LICENSE
Copyright (c) 2015, Eugenio
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution
* Neither the name of Universidad Tecnologica de Bolivar nor the names of its
  contributors may be used to endorse or promote products derived from this
  software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
