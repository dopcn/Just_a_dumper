//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface QAVAudioFrame : NSObject
{
    NSString *_identifier;
    NSData *_buffer;
    struct QAVAudioFrameDesc _desc;
}

@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) struct QAVAudioFrameDesc desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;

@end

