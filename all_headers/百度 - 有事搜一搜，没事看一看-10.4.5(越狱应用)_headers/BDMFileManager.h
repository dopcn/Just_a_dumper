//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BDMFileManager : NSObject
{
    NSString *_UIDFilePath;
    NSString *_documentDir;
    NSString *_cacheDir;
    NSString *_libraryDir;
    NSString *_outputDirPath;
    NSString *_sendDirPath;
    NSString *_configurePath;
    NSString *_sdkPath;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(retain, nonatomic) NSString *configurePath; // @synthesize configurePath=_configurePath;
@property(retain, nonatomic) NSString *sendDirPath; // @synthesize sendDirPath=_sendDirPath;
@property(retain, nonatomic) NSString *outputDirPath; // @synthesize outputDirPath=_outputDirPath;
@property(retain, nonatomic) NSString *libraryDir; // @synthesize libraryDir=_libraryDir;
@property(retain, nonatomic) NSString *cacheDir; // @synthesize cacheDir=_cacheDir;
@property(retain, nonatomic) NSString *documentDir; // @synthesize documentDir=_documentDir;
- (void).cxx_destruct;
- (void)createIfNotExist:(id)arg1;
- (void)prepareDir;
- (id)getSDKUIDFilePath;
- (id)sendFilePathWithFileName:(id)arg1;
- (id)outputFilePathWithFileName:(id)arg1;
- (id)init;

@end

