//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ChannelItemKey, NSMutableArray, NSString;

@interface ProfileAssetProtocol : ProtocolBaseJason
{
    _Bool _hasMore;
    int _requestAssetType;
    int _sin;
    int _ein;
    ChannelItemKey *_channelItemKey;
    NSMutableArray *_assetsList;
    long long _albumAmout;
    long long _dissAmout;
    long long _mvAmount;
    long long _songAmout;
    unsigned long long _visitqq;
    NSString *_encryptedUin;
}

+ (id)translateToChannelItem:(id)arg1;
+ (id)translateToChannleCreator:(id)arg1;
+ (id)translateCDList:(id)arg1;
+ (id)translateAlbumList:(id)arg1;
+ (_Bool)isShow:(id)arg1;
@property(copy, nonatomic) NSString *encryptedUin; // @synthesize encryptedUin=_encryptedUin;
@property(nonatomic) unsigned long long visitqq; // @synthesize visitqq=_visitqq;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long songAmout; // @synthesize songAmout=_songAmout;
@property(nonatomic) long long mvAmount; // @synthesize mvAmount=_mvAmount;
@property(nonatomic) long long dissAmout; // @synthesize dissAmout=_dissAmout;
@property(nonatomic) long long albumAmout; // @synthesize albumAmout=_albumAmout;
@property(retain, nonatomic) NSMutableArray *assetsList; // @synthesize assetsList=_assetsList;
@property(retain, nonatomic) ChannelItemKey *channelItemKey; // @synthesize channelItemKey=_channelItemKey;
@property(nonatomic) int ein; // @synthesize ein=_ein;
@property(nonatomic) int sin; // @synthesize sin=_sin;
@property(nonatomic) int requestAssetType; // @synthesize requestAssetType=_requestAssetType;
- (void).cxx_destruct;
- (_Bool)isSuccessfulReturnCode:(id)arg1;
- (_Bool)shouldRetryByBackHosts:(id)arg1;
- (_Bool)isProtocolReturnCodeOK:(long long)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)initWithReqestAssetType:(int)arg1;
- (id)init;

@end

