//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityDailyTaskItemPO : YKFAPIModel
{
    _Bool _finish;
    NSString *_action;
    NSString *_actionAward;
    NSString *_actionName;
    long long _actionPropAwardQuantity;
    NSString *_buttonCopyWriting;
    long long _finishedTimes;
    NSString *_hint;
    NSString *_iconUrl;
    long long _totalTimes;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long totalTimes; // @synthesize totalTimes=_totalTimes;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(nonatomic) long long finishedTimes; // @synthesize finishedTimes=_finishedTimes;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(retain, nonatomic) NSString *buttonCopyWriting; // @synthesize buttonCopyWriting=_buttonCopyWriting;
@property(nonatomic) long long actionPropAwardQuantity; // @synthesize actionPropAwardQuantity=_actionPropAwardQuantity;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSString *actionAward; // @synthesize actionAward=_actionAward;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

