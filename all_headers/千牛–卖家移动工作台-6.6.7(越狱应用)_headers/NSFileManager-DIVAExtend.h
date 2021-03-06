//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (DIVAExtend)
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (_Bool)checkCacheInvalidate:(id)arg1 invalidTime:(double)arg2;
+ (void)clearCacheDirectory:(id)arg1 invalidate:(double)arg2 fileExtensions:(id)arg3;
+ (id)readFileAtPath:(id)arg1;
+ (_Bool)saveFileAtPath:(id)arg1 fileData:(id)arg2;
+ (_Bool)createDirectoryAtPath:(id)arg1;
+ (_Bool)checkFilePath:(id)arg1 autoCreate:(_Bool)arg2;
+ (unsigned long long)folderSize:(id)arg1;
+ (id)localFileModifiedDate:(id)arg1;
@end

