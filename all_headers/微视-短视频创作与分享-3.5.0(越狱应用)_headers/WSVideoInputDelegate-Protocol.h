//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WSVideoFrameBuffer, WSVideoInput;

@protocol WSVideoInputDelegate <NSObject>

@optional
- (void)videoInputReadyForReading:(WSVideoInput *)arg1;
- (void)videoInput:(WSVideoInput *)arg1 didOutputSampleBuffer:(WSVideoFrameBuffer *)arg2;
- (void)videoInputDidFail:(WSVideoInput *)arg1;
- (void)videoInputDidFinishReading:(WSVideoInput *)arg1;
@end

