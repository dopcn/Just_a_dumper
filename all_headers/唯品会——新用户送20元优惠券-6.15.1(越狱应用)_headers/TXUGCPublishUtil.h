//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXUGCPublishUtil : NSObject
{
}

+ (id)loadThumbNail:(id)arg1;
+ (void)save:(id)arg1 ToPath:(id)arg2;
+ (void)checkVideoPath:(id)arg1;
+ (int)savePixelBuffer:(struct __CVBuffer *)arg1 ToJPEGPath:(id)arg2;
+ (id)imageFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)getFileNameByTimeNow:(id)arg1 fileType:(id)arg2;
+ (id)getCacheFolderPath;
+ (void)clearFileType:(id)arg1 AtFolderPath:(id)arg2;
+ (void)removeCacheFile:(id)arg1;
+ (id)renameFile:(id)arg1 newFileName:(id)arg2;
+ (id)getFileSHA1Signature:(id)arg1;
+ (struct opaqueCMSampleBuffer *)createAudioSample:(void *)arg1 size:(unsigned int)arg2 timingInfo:(CDStruct_d2aef016)arg3 numberChannels:(int)arg4 SampleRate:(int)arg5;

@end

