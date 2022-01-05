# ExoModel
* Lower Limb Exoskeleton Robot for Rehabilitation
* To use this Simulink model, you need MATLAB R2020a and above
* After download this model, open `ExoModel.prj` with MATLAB R2020a
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
