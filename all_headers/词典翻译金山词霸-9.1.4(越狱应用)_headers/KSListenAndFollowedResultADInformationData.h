//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSADInfoFlowDataModel.h"

@class NSArray, NSString;
@protocol Ignore, Optional;

@interface KSListenAndFollowedResultADInformationData : KSADInfoFlowDataModel
{
    NSString<Optional> *_begin_time;
    NSString<Ignore> *_interval_cnt;
    NSArray<Optional> *_click;
}

@property(retain, nonatomic) NSArray<Optional> *click; // @synthesize click=_click;
@property(copy, nonatomic) NSString<Ignore> *interval_cnt; // @synthesize interval_cnt=_interval_cnt;
@property(copy, nonatomic) NSString<Optional> *begin_time; // @synthesize begin_time=_begin_time;
- (void).cxx_destruct;

@end

