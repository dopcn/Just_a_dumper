//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QYPPPubLinesParser : NSObject
{
    _Bool _parsed;
    NSMutableArray *_timeArr;
    NSMutableArray *_wordArr;
    NSString *_lrcFilePath;
}

+ (float)secondsWithTime:(id)arg1;
@property(copy, nonatomic) NSString *lrcFilePath; // @synthesize lrcFilePath=_lrcFilePath;
@property(readonly, nonatomic, getter=isParsed) _Bool parsed; // @synthesize parsed=_parsed;
@property(readonly, nonatomic) NSMutableArray *wordArr; // @synthesize wordArr=_wordArr;
@property(readonly, nonatomic) NSMutableArray *timeArr; // @synthesize timeArr=_timeArr;
- (void).cxx_destruct;
- (void)parseLrc:(id)arg1;
- (void)parseLrc;
- (id)init;

@end

