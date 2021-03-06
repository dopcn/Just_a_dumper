//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDBasicData.h"

#import "BDRootData-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BDPlayURLCollection, BDSiteInfo, NSMutableArray, NSString;
@protocol BDPlayURLCollectionRequestProtocol;

@interface BDEpisodeData : BDBasicData <BDRootData, NSCopying, NSCoding>
{
    BDPlayURLCollection *_collection;
    id <BDPlayURLCollectionRequestProtocol> _req;
    _Bool _isNeedBDHDToCDN;
    _Bool _isDownloadenable;
    _Bool isValid;
    _Bool isWatched;
    _Bool isWatching;
    _Bool isFromDLNA;
    _Bool _onlySniffingHTML;
    _Bool _is_smallWindow;
    _Bool _downloadPermission;
    int videoType;
    NSString *videoID;
    BDSiteInfo *siteInfo;
    NSString *pageURL;
    NSString *title;
    NSString *_tvID;
    NSString *imgURL;
    NSString *sec;
    NSString *di;
    NSString *episode;
    NSString *currenSeason;
    double lastDuration;
    double totailTime;
    NSString *taskID;
    NSString *moiveType;
    NSString *_tvidForpps;
    NSMutableArray *urlList;
    NSMutableArray *titleList;
    NSString *urlDLNA;
    NSString *recordTime;
    NSString *update;
    NSString *rating;
    NSString *year;
    NSString *duration;
    NSString *leftTopImg;
    NSString *exp;
    NSString *movieName;
    NSString *hotSearchWord;
    NSString *_videoStyle;
    NSString *_imgRatio;
    NSString *_exp_id;
    NSString *_strategy_id;
    NSString *_subsitute_url;
}

+ (void)serializationTypeData:(id)arg1 isYingYin:(id)arg2;
+ (id)constructAloneData:(id)arg1 siteInfo:(id)arg2 videoType:(int)arg3;
+ (id)episodeDataWithoutSniffingWithDict:(id)arg1 playURLCollection:(id)arg2;
+ (id)constructYinYList:(id)arg1;
+ (id)episodeDataNotSnifferVideo:(id)arg1;
+ (id)SerializationData:(id)arg1;
@property(retain, nonatomic) NSString *subsitute_url; // @synthesize subsitute_url=_subsitute_url;
@property(retain, nonatomic) NSString *strategy_id; // @synthesize strategy_id=_strategy_id;
@property(retain, nonatomic) NSString *exp_id; // @synthesize exp_id=_exp_id;
@property(nonatomic) _Bool downloadPermission; // @synthesize downloadPermission=_downloadPermission;
@property(nonatomic) _Bool is_smallWindow; // @synthesize is_smallWindow=_is_smallWindow;
@property(nonatomic) _Bool onlySniffingHTML; // @synthesize onlySniffingHTML=_onlySniffingHTML;
@property(copy, nonatomic) NSString *imgRatio; // @synthesize imgRatio=_imgRatio;
@property(copy, nonatomic) NSString *videoStyle; // @synthesize videoStyle=_videoStyle;
@property(copy, nonatomic) NSString *hotSearchWord; // @synthesize hotSearchWord;
@property(retain, nonatomic) NSString *movieName; // @synthesize movieName;
@property(copy, nonatomic) NSString *exp; // @synthesize exp;
@property(retain, nonatomic) NSString *leftTopImg; // @synthesize leftTopImg;
@property(retain, nonatomic) NSString *duration; // @synthesize duration;
@property(retain, nonatomic) NSString *year; // @synthesize year;
@property(retain, nonatomic) NSString *rating; // @synthesize rating;
@property(retain, nonatomic) NSString *update; // @synthesize update;
@property(copy, nonatomic) NSString *recordTime; // @synthesize recordTime;
@property(copy, nonatomic) NSString *urlDLNA; // @synthesize urlDLNA;
@property(nonatomic) _Bool isFromDLNA; // @synthesize isFromDLNA;
@property(nonatomic) _Bool isWatching; // @synthesize isWatching;
@property(nonatomic) _Bool isWatched; // @synthesize isWatched;
@property(retain, nonatomic) NSMutableArray *titleList; // @synthesize titleList;
@property(retain, nonatomic) NSMutableArray *urlList; // @synthesize urlList;
@property(copy, nonatomic) NSString *tvidForpps; // @synthesize tvidForpps=_tvidForpps;
@property(copy, nonatomic) NSString *moiveType; // @synthesize moiveType;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID;
@property(nonatomic) double totailTime; // @synthesize totailTime;
@property(nonatomic) double lastDuration; // @synthesize lastDuration;
@property(copy, nonatomic) NSString *currenSeason; // @synthesize currenSeason;
@property(retain, nonatomic) BDPlayURLCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) int videoType; // @synthesize videoType;
@property(copy, nonatomic) NSString *episode; // @synthesize episode;
@property(copy, nonatomic) NSString *di; // @synthesize di;
@property(copy, nonatomic) NSString *sec; // @synthesize sec;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(nonatomic) _Bool isDownloadenable; // @synthesize isDownloadenable=_isDownloadenable;
@property(retain, nonatomic) NSString *imgURL; // @synthesize imgURL;
@property(copy, nonatomic) NSString *tvID; // @synthesize tvID=_tvID;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL;
@property(retain, nonatomic) BDSiteInfo *siteInfo; // @synthesize siteInfo;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID;
- (void).cxx_destruct;
- (void)setEpisode:(id)arg1 withIsper:(long long)arg2 videoType:(int)arg3;
- (id)realEpisode;
@property(readonly, nonatomic) long long isper;
- (void)dealloc;
- (struct CGSize)getImgRatio4Size;
- (_Bool)copyPlayURLsFrom:(id)arg1;
@property(readonly, nonatomic) _Bool allowFavorite;
@property(readonly, nonatomic) _Bool allowPlayOnYingbang;
@property(readonly, nonatomic) _Bool isPermitShare;
- (_Bool)isLocal;
- (id)getYinYList:(id)arg1 titles:(id)arg2;
- (void)cancelAllAsyncCall;
- (void)getPlayURLsAsyncOnComplete:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2 isNeedBDHDToCDN:(_Bool)arg3;
- (void)updateSiteInfoForEpisode:(id)arg1;
- (id)getVideoDataSync;
- (void)getVideoDataAsyncOnComplete:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (id)watchRecord;
- (id)actor;
- (id)logo;
- (id)brief;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_filterEpisodeData:(id)arg1;
- (id)_getURLReqProtocol;
- (_Bool)checkVideoCanNotDownload;
- (_Bool)isDownloadenableImpl;
- (id)replaceHtmlSymbol:(id)arg1;
- (id)displayString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

