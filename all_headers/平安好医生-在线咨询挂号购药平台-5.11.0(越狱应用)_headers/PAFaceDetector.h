//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PAFaceDetectAPIDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, PAFaceDetectionFrame;
@protocol PAFaceProtocolDelegate;

@interface PAFaceDetector : NSObject <PAFaceDetectAPIDelegate>
{
    int detectionType;
    int _failType;
    PAFaceDetectionFrame *_frame;
    NSMutableArray *_actionArray;
    long long _threeStitches;
    NSTimer *_timerCoundDown;
    id <PAFaceProtocolDelegate> _delegate;
}

+ (id)getVersion;
+ (id)detectorOfWithDetectionType:(int)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <PAFaceProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timerCoundDown; // @synthesize timerCoundDown=_timerCoundDown;
@property(nonatomic) long long threeStitches; // @synthesize threeStitches=_threeStitches;
@property(retain, nonatomic) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain, nonatomic) PAFaceDetectionFrame *frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)getAlgorithmLog;
- (void)resetAction;
- (void)resetWithDetectionType:(int)arg1;
- (id)getValidFrame;
- (void)suspendWihtForTheChangeAnimation:(int)arg1;
- (void)suspendWihtForTheUserBehaviorInTheProcessOfTesting:(int)arg1;
- (void)suspendOrStopBysuccessful:(id)arg1;
- (void)suspendOrStopByFaile:(int)arg1;
- (void)suspendWihtForTheRect:(struct CGRect)arg1 andTheImg:(id)arg2 andThePoint2f:(id)arg3;
- (_Bool)detectWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

