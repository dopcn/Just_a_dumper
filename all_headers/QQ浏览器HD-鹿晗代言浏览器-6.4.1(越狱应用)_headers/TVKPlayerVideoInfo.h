//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TVKPlayerVideoInfo : NSObject
{
    int _adMode;
    int _playType;
    int _formatType;
    NSString *_vid;
    NSString *_cid;
    double _startPosition;
    double _skipEndPosition;
}

@property(nonatomic) double skipEndPosition; // @synthesize skipEndPosition=_skipEndPosition;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) int formatType; // @synthesize formatType=_formatType;
@property(nonatomic) int playType; // @synthesize playType=_playType;
@property(nonatomic) int adMode; // @synthesize adMode=_adMode;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

