//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HYRelationUserInfo : NSObject
{
    NSString *_ytid;
    NSString *_nickname;
    NSString *_region;
    NSString *_mobile;
    NSString *_avatar;
    NSString *_tuid;
    NSString *_thirdpartyAvatar;
    NSString *_thirdpartyNickname;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(retain, nonatomic) NSString *thirdpartyNickname; // @synthesize thirdpartyNickname=_thirdpartyNickname;
@property(retain, nonatomic) NSString *thirdpartyAvatar; // @synthesize thirdpartyAvatar=_thirdpartyAvatar;
@property(retain, nonatomic) NSString *tuid; // @synthesize tuid=_tuid;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
- (void).cxx_destruct;

@end

