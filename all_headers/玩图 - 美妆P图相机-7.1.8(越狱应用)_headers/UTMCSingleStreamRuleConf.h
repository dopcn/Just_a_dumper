//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UTMCEventsSampleConf;

@interface UTMCSingleStreamRuleConf : NSObject
{
    UTMCEventsSampleConf *mEventsConf;
    NSMutableArray *mPagesConf;
    NSMutableArray *mArg1Conf;
    NSMutableArray *mArg2Conf;
    NSMutableArray *mArg3Conf;
    NSMutableArray *mArgsConf;
    NSString *mStreamName;
}

@property(retain) NSString *mStreamName; // @synthesize mStreamName;
- (void).cxx_destruct;
- (int)isMatchThisRule:(id)arg1;
- (int)isEqualOrLike:(id)arg1 withMatchArr:(id)arg2;
- (void)setMArgsConf:(id)arg1;
- (void)setMArg3Conf:(id)arg1;
- (void)setMArg2Conf:(id)arg1;
- (void)setMArg1Conf:(id)arg1;
- (void)setMPagesConf:(id)arg1;
- (void)setMEventsConf:(id)arg1;

@end

