//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BannerTipsActionItem : NSObject
{
    int _tipsDisAppearTime;
    NSString *_actionTitle;
    id _target;
    SEL _action;
    CDUnknownBlockType _eventBlock;
}

@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) int tipsDisAppearTime; // @synthesize tipsDisAppearTime=_tipsDisAppearTime;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (void).cxx_destruct;

@end

