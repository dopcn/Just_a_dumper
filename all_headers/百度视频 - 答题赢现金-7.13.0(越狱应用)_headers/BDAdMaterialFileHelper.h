//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BDAdMaterialFileHelper : NSObject
{
}

+ (id)materailCacheFileMd54Path:(id)arg1;
+ (_Bool)deleteFileAtPath:(id)arg1;
+ (_Bool)checkFileExistAtPath:(id)arg1;
+ (_Bool)checkDirExistAtPath:(id)arg1;
+ (_Bool)materailCacheDownload:(id)arg1 path:(id)arg2;
+ (id)materailCacheFilePath:(id)arg1;
+ (id)materailCacheCreateFileName:(id)arg1 fileType:(id)arg2;
+ (_Bool)materialCacheWritePlist:(id)arg1;
+ (id)materialCacheContentFilesAtPath:(id)arg1;
+ (id)materialCacheReadPlist;
+ (id)materialCacheDirPath;
+ (id)materialCachePlistPath;
+ (void)materialCacheCreatePlist;

@end

