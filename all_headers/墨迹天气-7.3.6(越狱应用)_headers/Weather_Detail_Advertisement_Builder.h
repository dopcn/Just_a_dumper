//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class Weather_Detail_Advertisement;

@interface Weather_Detail_Advertisement_Builder : PBGeneratedMessage_Builder
{
    Weather_Detail_Advertisement *result;
}

@property(retain) Weather_Detail_Advertisement *result; // @synthesize result;
- (id)clearAvatarForceUpdate;
- (id)setAvatarForceUpdate:(int)arg1;
- (int)avatarForceUpdate;
- (_Bool)hasAvatarForceUpdate;
- (id)clearAvatar;
- (id)mergeAvatar:(id)arg1;
- (id)setAvatarBuilder:(id)arg1;
- (id)setAvatar:(id)arg1;
- (id)avatar;
- (_Bool)hasAvatar;
- (id)clearAd;
- (id)setAdValues:(id *)arg1 count:(unsigned long long)arg2;
- (id)setAdArray:(id)arg1;
- (id)addAd:(id)arg1;
- (id)adAtIndex:(unsigned long long)arg1;
- (id)ad;
- (id)clearUpdatetime;
- (id)setUpdatetime:(long long)arg1;
- (long long)updatetime;
- (_Bool)hasUpdatetime;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

