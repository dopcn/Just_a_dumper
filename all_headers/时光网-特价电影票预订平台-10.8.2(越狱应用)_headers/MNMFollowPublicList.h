//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBModel.h"

@class NSNumber, NSString;

@interface MNMFollowPublicList : MTBModel
{
    _Bool _isFollowed;
    long long _publicId;
    NSString *_avatar;
    NSString *_name;
    NSString *_desc;
    NSString *_followCountDesc;
    NSString *_articleCountDesc;
    NSNumber *_lastUpdate;
}

@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSNumber *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(copy, nonatomic) NSString *articleCountDesc; // @synthesize articleCountDesc=_articleCountDesc;
@property(copy, nonatomic) NSString *followCountDesc; // @synthesize followCountDesc=_followCountDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;

@end

