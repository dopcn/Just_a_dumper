//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BNTTSPCVoiceInfo, NSArray, NSDictionary, NSString;

@protocol BNCustomTTSManagerProtocol <NSObject>
+ (NSString *)inUsingTTSId;
+ (_Bool)ttsIsInUsing;
- (void)doAfterShowCustomTTSUI:(NSDictionary *)arg1;
- (_Bool)isTaskBeenEdit:(NSString *)arg1;
- (BNTTSPCVoiceInfo *)currentTTSVoice;
- (NSString *)taskIdInUse;
- (void)setInUsingTaskId:(NSString *)arg1 withTag:(NSString *)arg2 withName:(NSString *)arg3;
- (void)setCurrentlyInUseTaskId:(NSString *)arg1;
- (void)getRecordedVoiceInfoByTaskId:(NSString *)arg1 complete:(void (^)(BNTTSPCVoiceInfo *))arg2;
- (BNTTSPCVoiceInfo *)getRecordedVoiceInfoByTaskId:(NSString *)arg1;
- (NSArray *)getRecordedVoiceItemByTaskId:(NSString *)arg1;
- (NSArray *)getPausedTasks;
- (NSArray *)getDownloadingTasks;
- (NSArray *)getDownloadedTasks;
- (NSArray *)getRecommendTasks;
- (NSArray *)getResidentTasks;
- (void)uploadTaskToServer:(NSString *)arg1 complete:(void (^)(_Bool *, BNTTSPCVoiceInfo *))arg2;
- (_Bool)uploadTaskToServer:(NSString *)arg1;
- (_Bool)dropRecordVoiceOfTask:(NSString *)arg1;
- (void)saveRecordedVoice:(NSArray *)arg1 taskId:(NSString *)arg2 tag:(NSString *)arg3 name:(NSString *)arg4 complete:(void (^)(_Bool *))arg5;
- (void)saveRecordedVoiceWithTaskId:(NSString *)arg1 tag:(NSString *)arg2 name:(NSString *)arg3 complete:(void (^)(_Bool *))arg4;
- (_Bool)saveRecordedVoiceWithTaskId:(NSString *)arg1 tag:(NSString *)arg2 name:(NSString *)arg3;
- (_Bool)recordVoiceData:(NSArray *)arg1 taskId:(NSString *)arg2;
- (NSString *)getTaskFilePathById:(NSString *)arg1 orgWord:(NSString *)arg2;
- (NSString *)getTaskFilePathById:(NSString *)arg1;
- (float)downedPercentOfTask:(NSString *)arg1;
- (long long)isTaskDownloaded:(NSString *)arg1;
- (_Bool)resumeTaskWithNetWork:(NSString *)arg1;
- (_Bool)resumeTask:(NSString *)arg1;
- (_Bool)pauseTaskWithNoNetWork:(NSString *)arg1;
- (_Bool)pauseTask:(NSString *)arg1;
- (_Bool)removeTaskById:(NSString *)arg1;
- (_Bool)appendTaskByInfo:(BNTTSPCVoiceInfo *)arg1;
- (void)appTaskById:(NSString *)arg1 complete:(void (^)(_Bool *))arg2;
- (_Bool)appendTaskById:(NSString *)arg1;
@end

