//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;
@protocol NTESNBPatchManagerDelegate;

@interface NTESNBPatchManager : NSObject
{
    id <NTESNBPatchManagerDelegate> _delegate;
    long long _requestStatus;
    long long _runningStatus;
    long long _crashFlag;
    double _requestPatchInfoDuration;
    double _requestPatchFilesDuration;
    double _requestPatchTotalDuration;
    NSString *_jsString;
    NSString *_serverPatchName;
    NSString *_serverPatchMD5;
    NSMutableDictionary *_configInfo;
    NSTimer *_patchInfoTimeoutTimer;
    NSTimer *_patchFilesTimeoutTimer;
    double _begin;
}

+ (id)defaultManager;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(nonatomic) __weak NSTimer *patchFilesTimeoutTimer; // @synthesize patchFilesTimeoutTimer=_patchFilesTimeoutTimer;
@property(nonatomic) __weak NSTimer *patchInfoTimeoutTimer; // @synthesize patchInfoTimeoutTimer=_patchInfoTimeoutTimer;
@property(retain, nonatomic) NSMutableDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) NSString *serverPatchMD5; // @synthesize serverPatchMD5=_serverPatchMD5;
@property(retain, nonatomic) NSString *serverPatchName; // @synthesize serverPatchName=_serverPatchName;
@property(retain, nonatomic) NSString *jsString; // @synthesize jsString=_jsString;
@property(nonatomic) double requestPatchTotalDuration; // @synthesize requestPatchTotalDuration=_requestPatchTotalDuration;
@property(nonatomic) double requestPatchFilesDuration; // @synthesize requestPatchFilesDuration=_requestPatchFilesDuration;
@property(nonatomic) double requestPatchInfoDuration; // @synthesize requestPatchInfoDuration=_requestPatchInfoDuration;
@property(nonatomic) long long crashFlag; // @synthesize crashFlag=_crashFlag;
@property(nonatomic) long long runningStatus; // @synthesize runningStatus=_runningStatus;
@property(nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(nonatomic) __weak id <NTESNBPatchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runTestPatch;
- (void)run;
- (id)currentAppVersion;
- (id)md5FromData:(id)arg1;
- (id)plainDataWithPath:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)cleanAllPatchInfo;
- (void)checkIsNeedCleanAllPatchInfo;
- (void)patchDidRunCompleteWith:(long long)arg1;
- (_Bool)runPatch;
- (void)patchDidRequestCompleteWith:(long long)arg1;
- (void)requestDidTimeout:(id)arg1;
- (void)patchFileDidDownloadWithPath:(id)arg1;
- (void)requestNewPatchFilesWithURLString:(id)arg1;
- (void)processPatchInfoWith:(id)arg1;
- (void)requestPatch;
- (_Bool)isContinuouslyCrash;
- (_Bool)isCrash;
- (void)saveConfigInfoToLocal;
- (id)configParameterInfo;
- (id)patchConfigInfoPath;
- (id)patchCacheDirectory;
- (void)dealloc;
- (id)init;

@end

