//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ATCallModel, ATCallingTeacherModel;

@interface ATCallViewModel : NSObject
{
    ATCallModel *_callModel;
    ATCallingTeacherModel *_callingTeacherModel;
}

@property(retain, nonatomic) ATCallingTeacherModel *callingTeacherModel; // @synthesize callingTeacherModel=_callingTeacherModel;
@property(retain, nonatomic) ATCallModel *callModel; // @synthesize callModel=_callModel;
- (void).cxx_destruct;
- (void)uploadVoiceLogFileWithFilePath:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)upLoadFeedBack:(id)arg1 content:(id)arg2;
- (void)uploadLogFileWithFilePath:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)uploadResultImage:(id)arg1 pageNum:(long long)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)actWithType:(long long)arg1 text:(id)arg2 searchId:(id)arg3 timeout:(long long)arg4 block:(CDUnknownBlockType)arg5;
- (void)actFinishTime:(long long)arg1 timeout:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)actWithType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)getActStringWithType:(long long)arg1;
- (void)askNewQuestionWithImage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)imageDidSubmitWithPid:(id)arg1 searchId:(id)arg2 image:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)changePicWithPid:(id)arg1 searchId:(id)arg2 image:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)updateCallModelWithPid:(id)arg1 searchId:(id)arg2 image:(id)arg3;
- (void)getServiceSigs:(CDUnknownBlockType)arg1;
- (void)checkCurrentServiceStatus:(CDUnknownBlockType)arg1;
- (void)callTeacherWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)dataDidLoadWith:(id)arg1;

@end

