//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOperationEx.h"

@class ALAssetsLibrary, NSArray, NSString, QHAssetCacheMgr, QOperation;

@interface QHPhotoSlimJob : QOperationEx
{
    _Bool _upload;
    int _state;
    QOperation *_operation;
    QHAssetCacheMgr *assetCache;
    ALAssetsLibrary *assetLibrary;
    NSString *i_assetUrl;
    NSArray *i_albumRefs;
    long long o_originalSize;
    long long o_slimedSize;
    long long xid;
}

+ (long long)getRemainSpaceThreshold;
@property(nonatomic) long long xid; // @synthesize xid;
@property(nonatomic) long long o_slimedSize; // @synthesize o_slimedSize;
@property(nonatomic) long long o_originalSize; // @synthesize o_originalSize;
@property(retain, nonatomic) NSArray *i_albumRefs; // @synthesize i_albumRefs;
@property(retain, nonatomic) NSString *i_assetUrl; // @synthesize i_assetUrl;
@property(retain, nonatomic) ALAssetsLibrary *assetLibrary; // @synthesize assetLibrary;
@property(retain, nonatomic) QHAssetCacheMgr *assetCache; // @synthesize assetCache;
- (void).cxx_destruct;
- (void)onAddAlbumRefs:(id)arg1;
- (void)asyncAddAlbumRefs:(id)arg1 albumRefs:(id)arg2;
- (_Bool)isHEICWritingSupported;
- (void)asyncCompressPhoto:(id)arg1;
- (void)asyncSlimPhoto;
- (void)startSlim;
- (void)asyncCheckSpace;
- (int)getState;
- (void)resume;
- (void)pause;
- (_Bool)tryCancel;
- (void)cancel;
- (void)start;
- (id)initWithUpload:(_Bool)arg1;
- (id)init;

@end

