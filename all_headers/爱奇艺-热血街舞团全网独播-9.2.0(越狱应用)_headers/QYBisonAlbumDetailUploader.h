//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDataObject.h"

@class NSDictionary, NSString;

@interface QYBisonAlbumDetailUploader : QYDataObject
{
    NSString *_objId;
    NSString *_icon;
    NSString *_btn;
    NSString *_status;
    NSString *_name;
    NSString *_verified;
    NSString *_type;
    NSString *_avatar;
    NSString *_verifiedType;
    NSString *_iconType;
    NSString *_userType;
    NSString *_spaceShowTemplate;
    NSString *_rseatHead;
    NSString *_rseatSub;
    NSString *_url;
    NSString *_isBiz;
    NSDictionary *_bizDict;
}

@property(copy, nonatomic) NSDictionary *bizDict; // @synthesize bizDict=_bizDict;
@property(copy, nonatomic) NSString *isBiz; // @synthesize isBiz=_isBiz;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *rseatSub; // @synthesize rseatSub=_rseatSub;
@property(retain, nonatomic) NSString *rseatHead; // @synthesize rseatHead=_rseatHead;
@property(copy, nonatomic) NSString *spaceShowTemplate; // @synthesize spaceShowTemplate=_spaceShowTemplate;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *verifiedType; // @synthesize verifiedType=_verifiedType;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *btn; // @synthesize btn=_btn;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *objId; // @synthesize objId=_objId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)buildWithDictionary:(id)arg1;

@end

