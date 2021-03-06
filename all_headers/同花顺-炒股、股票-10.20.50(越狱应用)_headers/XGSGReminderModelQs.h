//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, UILocalNotification;

@interface XGSGReminderModelQs : NSObject <NSCoding>
{
    NSString *_isAllRemindOn;
    NSString *_isRemindOn;
    NSString *_isYuyueRemindOn;
    NSString *_isAlwaysRemindTimeOn;
    NSString *_isZQRemindOn;
    NSString *_isJKRemindOn;
    NSString *_yuyueRemindTime;
    NSString *_saveYuyuerRemindTime;
    NSString *_sgTipLastTime;
    UILocalNotification *_sgRemindNoti;
}

+ (id)createDefaultModel;
@property(retain, nonatomic) UILocalNotification *sgRemindNoti; // @synthesize sgRemindNoti=_sgRemindNoti;
@property(copy, nonatomic) NSString *sgTipLastTime; // @synthesize sgTipLastTime=_sgTipLastTime;
@property(copy, nonatomic) NSString *saveYuyuerRemindTime; // @synthesize saveYuyuerRemindTime=_saveYuyuerRemindTime;
@property(copy, nonatomic) NSString *yuyueRemindTime; // @synthesize yuyueRemindTime=_yuyueRemindTime;
@property(copy, nonatomic) NSString *isJKRemindOn; // @synthesize isJKRemindOn=_isJKRemindOn;
@property(copy, nonatomic) NSString *isZQRemindOn; // @synthesize isZQRemindOn=_isZQRemindOn;
@property(copy, nonatomic) NSString *isAlwaysRemindTimeOn; // @synthesize isAlwaysRemindTimeOn=_isAlwaysRemindTimeOn;
@property(copy, nonatomic) NSString *isYuyueRemindOn; // @synthesize isYuyueRemindOn=_isYuyueRemindOn;
@property(copy, nonatomic) NSString *isRemindOn; // @synthesize isRemindOn=_isRemindOn;
@property(copy, nonatomic) NSString *isAllRemindOn; // @synthesize isAllRemindOn=_isAllRemindOn;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

