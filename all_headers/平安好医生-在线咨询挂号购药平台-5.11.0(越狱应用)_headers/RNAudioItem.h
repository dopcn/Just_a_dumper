//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSNumber;

@interface RNAudioItem : NSObject
{
    _Bool _playing;
    AVPlayerItem *_playerItem;
    double _expectInterval;
    NSNumber *_itemID;
}

@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) double expectInterval; // @synthesize expectInterval=_expectInterval;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 duration:(double)arg2;
- (id)initWithURL:(id)arg1;

@end

