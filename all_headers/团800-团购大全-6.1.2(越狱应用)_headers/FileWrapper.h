//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FileWrapper : NSObject
{
}

+ (void)deleteFiles;
+ (id)readFile;
+ (BOOL)isTheFileNewer:(id)arg1 Than:(id)arg2;
+ (void)writeFile:(id)arg1;
+ (id)readFileWithPath:(id)arg1;
+ (id)getTodayFileName;

@end

