//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PALivenessDetectionFrame;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface FaceCheckAPI : NSObject
{
    NSMutableArray *motionBlurInfo;
    NSMutableArray *score_arrayInfo;
    NSMutableArray *time_arrayInfo;
    NSMutableArray *brightnessInfo;
    int counter;
    _Bool attackResult_ISOK;
    PALivenessDetectionFrame *_theBestImage;
    float delta_pitch;
    float delta_roll;
    float delta_yaw;
    float last_pitch;
    float last_yaw;
    float last_roll;
    float left_eye_sum;
    float right_eye_sum;
    float mouth_sum;
    float moveTime_sum;
    _Bool isFirstTime;
    float max_left_eye_open;
    float max_right_eye_open;
    float max_mouth_open;
    double timeFirst;
    float score_value;
    int detectionType;
    NSObject<OS_dispatch_queue> *dispatchQueue;
    NSObject<OS_dispatch_group> *_group;
    int coutTemp;
    NSString *numberOfAction;
    long long _threeStitches;
    NSMutableArray *_actionArray;
}

+ (void)saveImage:(id)arg1 WithName:(id)arg2;
+ (void)writefileWTR:(id)arg1;
+ (void)writefile:(id)arg1;
+ (_Bool)getLeftRightUpDownCheckResult;
+ (void)setLeftRightUpDownCheckResult:(_Bool)arg1;
+ (id)finishApiResult;
+ (_Bool)apiFinishCheck;
+ (void)setApiFinishCheck:(_Bool)arg1 andTheResult:(id)arg2;
+ (id)finishHeadShakeCheckResult;
+ (_Bool)headShakeCheckFinishCheck;
+ (void)setHeadShakeCheckFinishCheck:(_Bool)arg1 andTheResult:(id)arg2;
+ (id)finishMouthCheckFinishResult;
+ (_Bool)mouthCheckFinishCheck;
+ (void)setMouthCheckFinishCheck:(_Bool)arg1 andTheResult:(id)arg2;
+ (id)finishFaceCheckResult;
+ (_Bool)faceCheckFinishCheck;
+ (void)setFaceCheckFinishCheck:(_Bool)arg1 andTheResult:(id)arg2;
+ (id)shareWithDelegate:(id)arg1;
@property(retain, nonatomic) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
@property(nonatomic) long long threeStitches; // @synthesize threeStitches=_threeStitches;
- (void).cxx_destruct;
- (void)dealloc;
- (struct Mat)cvMatGrayFromUIImage:(id)arg1;
- (struct Mat)cvMatFromUIImage:(id)arg1;
- (void)saveImage:(id)arg1 WithName:(id)arg2;
- (void)stopFaceCheck;
- (int)randActionType;
- (id)getCurrentDeviceModel;
- (void)throughTheImageDetectionInformationWithImage:(id)arg1 andTheCountdownNum:(int *)arg2;
- (void)writhLog:(id)arg1 logString:(id)arg2;
- (id)createNewLogFileWith:(id)arg1;
- (void)writhImageLog:(id)arg1 logString:(id)arg2;
- (id)createNewImageLogFileWith:(id)arg1;
- (void)resetFaceCheckAPIAndTheDiction:(id)arg1;

@end

