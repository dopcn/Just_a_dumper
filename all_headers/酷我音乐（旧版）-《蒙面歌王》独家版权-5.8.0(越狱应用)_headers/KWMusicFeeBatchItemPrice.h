//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KWMusicFeeUserAuthInfo, NSArray, NSMutableArray;

@interface KWMusicFeeBatchItemPrice : NSObject
{
    vector_6f037ce7 m_albumIds_fee;
    int _authType;
    int _policy_count_vip;
    int _policy_count_song;
    int _policy_count_album;
    int _policy_count_failed;
    int _all_costing_vip;
    float _rmbPrice_songs;
    float _kubiPrice_songs;
    float _rmbPrice_albums;
    float _kubiPrice_albums;
    NSArray *_mediaItems;
    NSMutableArray *_media_boughts;
    NSMutableArray *_media_frees;
    NSMutableArray *_media_fees;
    KWMusicFeeUserAuthInfo *_vipUserInfo;
    NSMutableArray *_priceItems_all;
}

@property(nonatomic) float kubiPrice_albums; // @synthesize kubiPrice_albums=_kubiPrice_albums;
@property(nonatomic) float rmbPrice_albums; // @synthesize rmbPrice_albums=_rmbPrice_albums;
@property(nonatomic) float kubiPrice_songs; // @synthesize kubiPrice_songs=_kubiPrice_songs;
@property(nonatomic) float rmbPrice_songs; // @synthesize rmbPrice_songs=_rmbPrice_songs;
@property(nonatomic) int all_costing_vip; // @synthesize all_costing_vip=_all_costing_vip;
@property(nonatomic) int policy_count_failed; // @synthesize policy_count_failed=_policy_count_failed;
@property(nonatomic) int policy_count_album; // @synthesize policy_count_album=_policy_count_album;
@property(nonatomic) int policy_count_song; // @synthesize policy_count_song=_policy_count_song;
@property(nonatomic) int policy_count_vip; // @synthesize policy_count_vip=_policy_count_vip;
@property(retain, nonatomic) NSMutableArray *priceItems_all; // @synthesize priceItems_all=_priceItems_all;
@property(retain, nonatomic) KWMusicFeeUserAuthInfo *vipUserInfo; // @synthesize vipUserInfo=_vipUserInfo;
@property(retain, nonatomic) NSMutableArray *media_fees; // @synthesize media_fees=_media_fees;
@property(retain, nonatomic) NSMutableArray *media_frees; // @synthesize media_frees=_media_frees;
@property(retain, nonatomic) NSMutableArray *media_boughts; // @synthesize media_boughts=_media_boughts;
@property(nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(nonatomic) int authType; // @synthesize authType=_authType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)kubiPolicyPrice_albums;
- (float)rmbPolicyPrice_albums;
- (float)kubiPolicyPrice_songs;
- (float)rmbPolicyPrice_songs;
- (int)costing_vip;
- (int)vipDownloadBalanceLeft;
- (int)vipAlreadyDownloadCount;
- (int)vipMaxlimitDownloadCount;
- (_Bool)isCurrentVipCanLevelUp;
- (_Bool)isCurrentUserVip;
- (int)policyCount_failed;
- (int)policyCount_album;
- (int)policyCount_song;
- (int)policyCount_vip;
- (int)albumFeeCount;
- (vector_6f037ce7 *)albumIdArrayFee;
- (id)allPriceItems;
- (id)mediaItems_fee;
- (id)mediaItems_free;
- (id)mediaItems_bought;
- (id)mediaItems_all;
- (_Bool)allMediaItemFee;
- (int)authorityType;
- (void)dealloc;
- (id)init;

@end

