//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MDCameraAdapterConfigure : NSObject
{
    NSString *_sessionPreset;
    unsigned long long _frameRate;
    long long _devicePosition;
    NSObject<OS_dispatch_queue> *_sampleBufferVideoProcessingQueue;
    NSObject<OS_dispatch_queue> *_sampleBufferAudioProcessingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferAudioProcessingQueue; // @synthesize sampleBufferAudioProcessingQueue=_sampleBufferAudioProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferVideoProcessingQueue; // @synthesize sampleBufferVideoProcessingQueue=_sampleBufferVideoProcessingQueue;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
- (void).cxx_destruct;

@end

