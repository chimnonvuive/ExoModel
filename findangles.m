srcdir = 'G:\My Drive\Projects\Exoskeleton\INIT_GaitDB\silhouettes\101_90_a-l0.5_01';

addpath(srcdir)
d = dir([srcdir,'\*.png']);

v = VideoWriter('tmpvid.mp4');

%%
open(v)
% im_i = imbinarize(imread('101_90_a-l0.5_01_0520.png'));
for i=1:length(d)
    im_i = imread(d(i).name);
%     im_skel = bwskel(imbinarize(im_i));
%     writeVideo(v,uint8(im_skel*255));
    writeVideo(v,im_i);
end
close(v)


%%
% import the video file
obj = VideoReader('Phases.avi');
vid = read(obj);
%%
 % read the total number of frames
frames = obj.NumberOfFrames;
  
% file format of the frames to be saved in
ST ='.png';
%%
% reading and writing the frames 
for x = 1 : frames
  
    % converting integer to string
    Sx = num2str(x);
  
    % concatenating 2 strings
    Strc = strcat(Sx, ST);
    Vid = vid(:, :, :, x);
    cd frames
  
    % exporting the frames
    imwrite(Vid, Strc);
    cd ..  
end

%%

% Hip_Center = 1;
% Spine = 2;
% Shoulder_Center = 3;
% Head = 4;
% Shoulder_Left = 5;
% Elbow_Left = 6;
% Wrist_Left = 7;
% Hand_Left = 8;
% Shoulder_Right = 9;
% Elbow_Right = 10;
% Wrist_Right = 11;
% Hand_Right = 12;
% Hip_Left = 13;
% Knee_Left = 14;
% Ankle_Left = 15;
% Foot_Left = 16; 
% Hip_Right = 17;
% Knee_Right = 18;
% Ankle_Right = 19;
% Foot_Right = 20;
% skelet