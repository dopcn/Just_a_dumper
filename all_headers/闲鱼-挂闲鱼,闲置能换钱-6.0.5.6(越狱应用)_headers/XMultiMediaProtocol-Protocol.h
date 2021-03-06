//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, UIImage;

@protocol XMultiMediaProtocol <NSObject>
- (void)cancelVideoUpload;
- (void)uploadVoiceFilePathUrl:(NSURL *)arg1 SuccessBlock:(void (^)(NSString *, NSString *, NSString *))arg2 failedBlock:(void (^)(NSString *))arg3 progressBlock:(void (^)(float))arg4;
- (void)uploadVideoFilePathUrl:(NSURL *)arg1 SuccessBlock:(void (^)(NSString *, NSString *, NSString *))arg2 failedBlock:(void (^)(NSString *))arg3 progressBlock:(void (^)(float))arg4;
- (void)uploadVideoWithImage:(UIImage *)arg1 videoFilePathUrl:(NSURL *)arg2 SuccessBlock:(void (^)(NSString *, NSString *, NSString *))arg3 failedBlock:(void (^)(NSString *))arg4 progressBlock:(void (^)(float))arg5;
- (void)getItemVideoPlayURLWithVideoID:(NSString *)arg1 result:(void (^)(_Bool, FMItemVideoPlayURLDO *, NSString *))arg2;
- (void)batchDownloadByMeidaKeyArray:(NSArray *)arg1;
- (void)downloadByMediaKey:(NSString *)arg1 checkmd5:(NSString *)arg2 withCallback:(void (^)(_Bool, NSString *, NSString *, NSString *, NSData *))arg3;
- (void)downloadByMediaKey:(NSString *)arg1 withCallback:(void (^)(_Bool, NSString *, NSString *, NSString *, NSData *))arg2;
- (NSString *)pathForMediaKey:(NSString *)arg1;
- (unsigned long long)stateForMediaKey:(NSString *)arg1;
- (void)stopPlayVoice;
- (void)cleanAudioTempDic;
- (void)cleanAudioExpireFile;
@end

