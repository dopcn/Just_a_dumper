//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BARCMSampleBufferRefObject : NSObject
{
    struct opaqueCMSampleBuffer *_sampleBufferRef;
}

@property(nonatomic) struct opaqueCMSampleBuffer *sampleBufferRef; // @synthesize sampleBufferRef=_sampleBufferRef;
- (void)dealloc;
- (id)initWithCMSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1;

@end

