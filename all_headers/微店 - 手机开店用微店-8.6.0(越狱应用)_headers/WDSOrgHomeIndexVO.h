//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WDSOrgUserShopInfoModel;

@interface WDSOrgHomeIndexVO : NSObject
{
    _Bool _isFollow;
    NSString *_banner;
    WDSOrgUserShopInfoModel *_userShopInfo;
    NSMutableArray *_recommendOrgs;
    NSMutableArray *_followedOrgs;
}

@property(retain, nonatomic) NSMutableArray *followedOrgs; // @synthesize followedOrgs=_followedOrgs;
@property(retain, nonatomic) NSMutableArray *recommendOrgs; // @synthesize recommendOrgs=_recommendOrgs;
@property(retain, nonatomic) WDSOrgUserShopInfoModel *userShopInfo; // @synthesize userShopInfo=_userShopInfo;
@property(copy, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void).cxx_destruct;

@end

