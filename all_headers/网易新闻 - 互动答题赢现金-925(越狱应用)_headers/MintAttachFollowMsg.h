//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MintPublicZoneMsg.h"

@class EMMUser, NSMutableAttributedString, NSString;

@interface MintAttachFollowMsg : MintPublicZoneMsg
{
    EMMUser *_user;
    NSString *_msg;
    NSMutableAttributedString *_attribute;
}

+ (id)eventType;
@property(retain, nonatomic) NSMutableAttributedString *attribute; // @synthesize attribute=_attribute;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) EMMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)clearAttributes;
- (id)encodeAttachment;
- (id)userInfo;
- (unsigned long long)UIType;
- (void)filterWithRoomId:(unsigned long long)arg1;
- (id)attributeString;

@end

