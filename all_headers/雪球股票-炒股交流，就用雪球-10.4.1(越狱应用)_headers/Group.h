//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNBFoundation/SNBObject.h>

#import "Group-Protocol.h"

@class NSString;

@interface Group : SNBObject <Group>
{
    NSString *_tmpName;
    long long _groupId;
    NSString *_blankTip;
    long long _showTip;
}

+ (id)snb_dynamic_property_attr_member;
+ (id)snb_dynamic_property_attr_include;
+ (id)snb_dynamic_property_attr_filterType;
+ (id)snb_dynamic_property_attr_orderId;
+ (id)snb_dynamic_property_attr_sourceName;
+ (id)snb_dynamic_property_attr_name;
@property(nonatomic) long long showTip; // @synthesize showTip=_showTip;
@property(retain, nonatomic) NSString *blankTip; // @synthesize blankTip=_blankTip;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *tmpName; // @synthesize tmpName=_tmpName;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)supportEdit;
- (_Bool)isHidden;
- (_Bool)isCustom;
@property(readonly, nonatomic) NSString *screenName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long filterType; // @dynamic filterType;
@property(nonatomic, getter=isInclude) _Bool include; // @dynamic include;
@property(nonatomic, getter=isMember) _Bool member; // @dynamic member;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long orderId; // @dynamic orderId;
@property(retain, nonatomic) NSString *sourceName; // @dynamic sourceName;
@property(readonly) Class superclass;

@end

