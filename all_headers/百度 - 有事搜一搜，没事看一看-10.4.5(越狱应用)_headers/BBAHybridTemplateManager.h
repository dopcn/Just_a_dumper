//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BBAHybridTemplateManager : NSObject
{
}

+ (id)manager;
- (id)packageJSONForTemplate:(id)arg1;
- (void)cloudHybridDownloadFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteTemplateFileByName:(id)arg1;
- (id)templateFileBundlePath;
- (id)templateDownloadZipFilePath;
- (id)readAccessFilePath;
- (id)templateFilePath;
- (void)syncUpdateTemplateWithInfo:(id)arg1 error:(id *)arg2;
- (void)asynUpdateTemplateArray:(id)arg1 itemCompletion:(CDUnknownBlockType)arg2 allDown:(CDUnknownBlockType)arg3;
- (id)templateVersionInfo;
- (id)templateBaseURLWithName:(id)arg1;
- (id)templateHTMLStringWithName:(id)arg1;
- (id)templatePathWithName:(id)arg1;
- (id)versionWithPath:(id)arg1;
- (void)copyTemplateFileIfNeed;
- (void)buildFileFolderIfNeed;
- (id)init;

@end

