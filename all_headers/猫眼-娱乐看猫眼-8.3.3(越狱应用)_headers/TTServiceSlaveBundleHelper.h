//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTServiceSlaveBundleHelper : NSObject
{
}

+ (id)pathWithDirectoryPath:(id)arg1 filename:(id)arg2;
+ (id)bundleZipFilePathWithFilename:(id)arg1;
+ (id)bundleHashFilePath;
+ (id)bundleUnzipDirectoryPath;
+ (id)bundleHashDirectoryPath;
+ (id)bundleZipDirectoryPath;
+ (id)homeDirectoryPath;
+ (id)bundleHashForScope:(id)arg1;
+ (_Bool)saveBundleHash:(id)arg1 forScope:(id)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userDescription:(id)arg3;
+ (id)bundleErrorWithMessage:(id)arg1;

@end

