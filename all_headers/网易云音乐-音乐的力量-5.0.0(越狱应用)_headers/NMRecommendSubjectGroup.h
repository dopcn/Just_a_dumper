//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface NMRecommendSubjectGroup : NSObject
{
    NSArray *_subjects;
    NSString *_pubTime;
    NSDate *_date;
    NSString *_dateString;
}

@property(readonly, copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSArray *subjects; // @synthesize subjects=_subjects;
- (void).cxx_destruct;

@end

