//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTObject.h"

#import "MaterialModelProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString, stMetaMaterial, stMusicFullInfo;

@interface FSMaterialModel : TTObject <MaterialModelProtocol, NSCoding>
{
    _Bool _loading;
    float _playProgress;
    stMetaMaterial *_material;
    stMusicFullInfo *_musicInfo;
    NSString *_sid;
    NSString *_name;
    NSString *_thumbnailURL;
    long long _playState;
}

+ (id)materialWithMusicInfo:(id)arg1;
+ (id)materialWithMetaMaterial:(id)arg1 resuePool:(id)arg2;
+ (id)materialWithId:(id)arg1 name:(id)arg2 thumbnailUrl:(id)arg3 packUrl:(id)arg4;
+ (id)materialWithMetaMaterial:(id)arg1;
@property(nonatomic) float playProgress; // @synthesize playProgress=_playProgress;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) stMusicFullInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) stMetaMaterial *material; // @synthesize material=_material;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)updateMaterial:(id)arg1;
- (id)initWithMetaMaterial:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

