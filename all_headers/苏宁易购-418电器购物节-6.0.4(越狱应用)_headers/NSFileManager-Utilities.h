//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (Utilities)
+ (_Bool)wbsdk_FileExists:(id)arg1;
+ (_Bool)wbsdk_RemoveFileAtPath:(id)arg1;
+ (_Bool)wbsdk_CreateDirectoryIfNotExisted:(id)arg1 error:(id *)arg2;
+ (id)wbsdk_PathsForBundleDocumentsMatchingExtension:(id)arg1;
+ (id)wbsdk_PathsForDocumentsMatchingExtension:(id)arg1;
+ (id)wbsdk_PathsForItemsMatchingExtension:(id)arg1 inFolder:(id)arg2;
+ (id)wbsdk_FilesInFolder:(id)arg1;
+ (id)wbsdk_PathForBundleDocumentNamed:(id)arg1;
+ (id)wbsdk_PathForFileInCacheNamed:(id)arg1;
+ (id)wbsdk_PathForFileInDocumentNamed:(id)arg1;
+ (id)wbsdk_PathForItemNamed:(id)arg1 inFolder:(id)arg2;
@end

