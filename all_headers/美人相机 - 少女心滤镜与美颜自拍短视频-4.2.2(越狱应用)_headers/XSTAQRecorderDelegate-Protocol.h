//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XSTAQRecorder;

@protocol XSTAQRecorderDelegate <NSObject>
- (void)aqRecorder:(XSTAQRecorder *)arg1 handleInputBufferWithData:(char *)arg2 withMaxLength:(unsigned int)arg3;

@optional
- (void)aqRecorderStop;
- (void)aqRecorderStart;
@end

