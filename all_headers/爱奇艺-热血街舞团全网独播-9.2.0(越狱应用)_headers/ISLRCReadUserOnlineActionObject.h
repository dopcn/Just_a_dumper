//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ISLRCReadBaseObject.h"

@class NSString;

@interface ISLRCReadUserOnlineActionObject : ISLRCReadBaseObject
{
    _Bool _isGuardOrBadge;
    NSString *_name;
    NSString *_carName;
    NSString *_effect_id;
    NSString *_badge_level;
    NSString *_guard_level;
    NSString *_vip_level;
}

@property(nonatomic) _Bool isGuardOrBadge; // @synthesize isGuardOrBadge=_isGuardOrBadge;
@property(copy, nonatomic) NSString *vip_level; // @synthesize vip_level=_vip_level;
@property(copy, nonatomic) NSString *guard_level; // @synthesize guard_level=_guard_level;
@property(copy, nonatomic) NSString *badge_level; // @synthesize badge_level=_badge_level;
@property(copy, nonatomic) NSString *effect_id; // @synthesize effect_id=_effect_id;
@property(copy, nonatomic) NSString *carName; // @synthesize carName=_carName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

